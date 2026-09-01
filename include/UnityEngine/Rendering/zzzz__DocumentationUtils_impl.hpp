#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DocumentationUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DocumentationUtils_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DocumentationUtils.TryGetHelpURL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::StringW>)>(&::UnityEngine::Rendering::DocumentationUtils::TryGetHelpURL)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x678826c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DocumentationUtils*>(),
                                                                                           { "TryGetHelpURL", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
template <typename TEnum> inline ::StringW UnityEngine::Rendering::DocumentationUtils::GetHelpURL(TEnum mask) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DocumentationUtils*>(), { "GetHelpURL", { ::i2c::class_of<TEnum>() }, { ::i2c::type_of<TEnum>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEnum>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mask);
}
inline bool UnityEngine::Rendering::DocumentationUtils::TryGetHelpURL(::System::Type* type, ::by_ref<::StringW> url) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DocumentationUtils*>(),
                                                                                         { "TryGetHelpURL", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, url);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DocumentationUtils::DocumentationUtils() {}
