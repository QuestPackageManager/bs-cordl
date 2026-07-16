#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/CowatchViewerUpdate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CowatchViewerUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::CowatchViewerUpdate::*)(::System::IntPtr)>(&::Oculus::Platform::Models::CowatchViewerUpdate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ded300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::CowatchViewerUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::CowatchViewerList*& Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_get_DataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataList;
}
constexpr ::Oculus::Platform::Models::CowatchViewerList* const& Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_get_DataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataList;
}
constexpr void Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_set_DataList(::Oculus::Platform::Models::CowatchViewerList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DataList = value;
}
constexpr uint64_t& Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr uint64_t const& Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_set_Id(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
inline void Oculus::Platform::Models::CowatchViewerUpdate::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::CowatchViewerUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::CowatchViewerUpdate* Oculus::Platform::Models::CowatchViewerUpdate::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::CowatchViewerUpdate*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CowatchViewerUpdate::CowatchViewerUpdate() {}
