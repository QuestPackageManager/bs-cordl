#pragma once
// IWYU pragma private; include "Zenject/ISubContainerCreator.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::ISubContainerCreator.CreateSubContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::ISubContainerCreator::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                                                    ::Zenject::InjectContext*)>(&::Zenject::ISubContainerCreator::CreateSubContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ISubContainerCreator*>(), { ::i2c::class_of<::Zenject::ISubContainerCreator*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Zenject::DiContainer* Zenject::ISubContainerCreator::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ISubContainerCreator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, args, context);
}
