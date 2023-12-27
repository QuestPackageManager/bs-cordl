#pragma once
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__SortVersion_def.hpp"
constexpr int32_t& System::Globalization::SortVersion::__get_m_NlsVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_NlsVersion;
}
constexpr int32_t const& System::Globalization::SortVersion::__get_m_NlsVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_NlsVersion;
}
constexpr void System::Globalization::SortVersion::__set_m_NlsVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_NlsVersion = value;
}
constexpr ::System::Guid& System::Globalization::SortVersion::__get_m_SortId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SortId;
}
constexpr ::System::Guid const& System::Globalization::SortVersion::__get_m_SortId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SortId;
}
constexpr void System::Globalization::SortVersion::__set_m_SortId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_SortId = value;
}
// Ctor Parameters []
constexpr ::System::Globalization::SortVersion::SortVersion() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
