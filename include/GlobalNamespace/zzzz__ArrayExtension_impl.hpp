#pragma once
// IWYU pragma private; include "GlobalNamespace/ArrayExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ArrayExtension_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArrayExtension.IsValidIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Array*, int32_t)>(&::GlobalNamespace::ArrayExtension::IsValidIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3309d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayExtension*>(), { "IsValidIndex", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ArrayExtension::IsValidIndex(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayExtension*>(), { "IsValidIndex", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, index);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArrayExtension::ArrayExtension() {}
