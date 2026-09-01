#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\ValidationUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ValidationUtils_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ValidationUtils.ArgumentNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::Newtonsoft::Json::Utilities::ValidationUtils::ArgumentNotNull)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d33ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ValidationUtils*>(),
                                                                                           { "ArgumentNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::ValidationUtils::ArgumentNotNull(::System::Object* value, ::StringW parameterName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ValidationUtils*>(),
                                                                                         { "ArgumentNotNull", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, parameterName);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ValidationUtils::ValidationUtils() {}
