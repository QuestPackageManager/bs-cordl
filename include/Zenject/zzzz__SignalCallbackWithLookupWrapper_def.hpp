#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignalCallbackWithLookupWrapper)
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class SignalBus;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class SignalBindingBindInfo;
}
// Forward declare root types
namespace Zenject {
class SignalCallbackWithLookupWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalCallbackWithLookupWrapper);
// Type: Zenject::SignalCallbackWithLookupWrapper
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10648))
// CS Name: ::Zenject::SignalCallbackWithLookupWrapper*
class CORDL_TYPE SignalCallbackWithLookupWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _signalBus, offset 0x18, size 0x8
  __declspec(property(get = __get__signalBus, put = __set__signalBus))::Zenject::SignalBus* _signalBus;

  /// @brief Field _lookupId, offset 0x20, size 0x10
  __declspec(property(get = __get__lookupId, put = __set__lookupId))::System::Guid _lookupId;

  /// @brief Field _methodGetter, offset 0x30, size 0x8
  __declspec(property(get = __get__methodGetter, put = __set__methodGetter))::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* _methodGetter;

  /// @brief Field _objectType, offset 0x38, size 0x8
  __declspec(property(get = __get__objectType, put = __set__objectType))::System::Type* _objectType;

  /// @brief Field _signalType, offset 0x40, size 0x8
  __declspec(property(get = __get__signalType, put = __set__signalType))::System::Type* _signalType;

  /// @brief Field _identifier, offset 0x48, size 0x8
  __declspec(property(get = __get__identifier, put = __set__identifier))::System::Object* _identifier;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::Zenject::SignalBus*& __get__signalBus();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalBus*> const& __get__signalBus() const;

  constexpr void __set__signalBus(::Zenject::SignalBus* value);

  constexpr ::System::Guid& __get__lookupId();

  constexpr ::System::Guid const& __get__lookupId() const;

  constexpr void __set__lookupId(::System::Guid value);

  constexpr ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>*& __get__methodGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>*> const& __get__methodGetter() const;

  constexpr void __set__methodGetter(::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* value);

  constexpr ::System::Type*& __get__objectType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__objectType() const;

  constexpr void __set__objectType(::System::Type* value);

  constexpr ::System::Type*& __get__signalType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__signalType() const;

  constexpr void __set__signalType(::System::Type* value);

  constexpr ::System::Object*& __get__identifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__identifier() const;

  constexpr void __set__identifier(::System::Object* value);

  static inline ::Zenject::SignalCallbackWithLookupWrapper* New_ctor(::Zenject::SignalBindingBindInfo* signalBindInfo, ::System::Type* objectType, ::System::Guid lookupId,
                                                                     ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* methodGetter, ::Zenject::SignalBus* signalBus,
                                                                     ::Zenject::DiContainer* container);

  /// @brief Method .ctor addr 0x2ec10e4 size 0xf8 virtual false final false
  inline void _ctor(::Zenject::SignalBindingBindInfo* signalBindInfo, ::System::Type* objectType, ::System::Guid lookupId,
                    ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* methodGetter, ::Zenject::SignalBus* signalBus, ::Zenject::DiContainer* container);

  /// @brief Method OnSignalFired addr 0x2ec11e4 size 0x1c8 virtual false final false
  inline void OnSignalFired(::System::Object* signal);

  /// @brief Method Dispose addr 0x2ec13ac size 0xa0 virtual true final true
  inline void Dispose();

  /// @brief Method __zenCreate addr 0x2ec1454 size 0x290 virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ec16e4 size 0x544 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWithLookupWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalCallbackWithLookupWrapper(SignalCallbackWithLookupWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWithLookupWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalCallbackWithLookupWrapper(SignalCallbackWithLookupWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalCallbackWithLookupWrapper();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _signalBus, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SignalBus* ____signalBus;

  /// @brief Field _lookupId, offset: 0x20, size: 0x10, def value: None
  ::System::Guid ____lookupId;

  /// @brief Field _methodGetter, offset: 0x30, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* ____methodGetter;

  /// @brief Field _objectType, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____objectType;

  /// @brief Field _signalType, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ____signalType;

  /// @brief Field _identifier, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____identifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalCallbackWithLookupWrapper, 0x50>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalCallbackWithLookupWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalCallbackWithLookupWrapper*, "Zenject", "SignalCallbackWithLookupWrapper");
