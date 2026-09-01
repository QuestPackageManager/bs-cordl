#pragma once
// IWYU pragma private; include "System\Dynamic\IDynamicMetaObjectProvider.hpp"
#include "System/Dynamic/zzzz__IDynamicMetaObjectProvider_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Dynamic::IDynamicMetaObjectProvider.GetMetaObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (::System::Dynamic::IDynamicMetaObjectProvider::*)(::System::Linq::Expressions::Expression*)>(
    &::System::Dynamic::IDynamicMetaObjectProvider::GetMetaObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::IDynamicMetaObjectProvider*>(), { ::i2c::class_of<::System::Dynamic::IDynamicMetaObjectProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::IDynamicMetaObjectProvider::GetMetaObject(::System::Linq::Expressions::Expression* parameter) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::IDynamicMetaObjectProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, parameter);
}
