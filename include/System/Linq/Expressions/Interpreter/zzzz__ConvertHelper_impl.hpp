#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ConvertHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ConvertHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ConvertHelper.ToInt32NoNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*)>(&::System::Linq::Expressions::Interpreter::ConvertHelper::ToInt32NoNull)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f87be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ConvertHelper*>(), { "ToInt32NoNull", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Linq::Expressions::Interpreter::ConvertHelper::ToInt32NoNull(::System::Object* val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ConvertHelper*>(), { "ToInt32NoNull", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ConvertHelper::ConvertHelper() {}
