#include "exampleLib.h"
#include "ada.h"

std::string foo(std::string_view url) {
  auto purl = ada::parse<ada::url>(url);
  if (!purl)
    return {};
  return purl->get_host();
}