#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/DefaultDllImportSearchPathsAttribute.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__DefaultDllImportSearchPathsAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::*)(
    ::System::Runtime::InteropServices::DllImportSearchPath)>(&::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bc4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::DllImportSearchPath>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath& System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__cordl_internal_get__paths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paths;
}
constexpr ::System::Runtime::InteropServices::DllImportSearchPath const& System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__cordl_internal_get__paths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paths;
}
constexpr void System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__cordl_internal_set__paths(::System::Runtime::InteropServices::DllImportSearchPath value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paths = value;
}
inline void System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::_ctor(::System::Runtime::InteropServices::DllImportSearchPath paths) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::DllImportSearchPath>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paths);
}
inline ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*
System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::New_ctor(::System::Runtime::InteropServices::DllImportSearchPath paths) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*>(paths));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::DefaultDllImportSearchPathsAttribute() {}
