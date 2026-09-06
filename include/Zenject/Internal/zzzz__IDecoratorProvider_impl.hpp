#pragma once
// IWYU pragma private; include "Zenject/Internal/IDecoratorProvider.hpp"
#include "Zenject/Internal/zzzz__IDecoratorProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::IDecoratorProvider.GetAllInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::IDecoratorProvider::*)(
    ::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::Internal::IDecoratorProvider::GetAllInstances)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::Internal::IDecoratorProvider*>(), { ::i2c::class_of<::Zenject::Internal::IDecoratorProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline void Zenject::Internal::IDecoratorProvider::GetAllInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context,
                                                                   ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::Internal::IDecoratorProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, context, buffer);
}
