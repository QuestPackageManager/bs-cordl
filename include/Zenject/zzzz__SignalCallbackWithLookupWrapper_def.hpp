#pragma once
// IWYU pragma private; include "Zenject/SignalCallbackWithLookupWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignalCallbackWithLookupWrapper)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace Zenject {
class SignalBus;
}
// Forward declare root types
namespace Zenject {
class SignalCallbackWithLookupWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalCallbackWithLookupWrapper);
// Dependencies System.Guid, System.IDisposable, System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SignalCallbackWithLookupWrapper
class CORDL_TYPE SignalCallbackWithLookupWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _identifier, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__identifier, put = __cordl_internal_set__identifier)) ::System::Object* _identifier;

  /// @brief Field _lookupId, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__lookupId, put = __cordl_internal_set__lookupId)) ::System::Guid _lookupId;

  /// @brief Field _methodGetter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__methodGetter, put = __cordl_internal_set__methodGetter)) ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* _methodGetter;

  /// @brief Field _objectType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__objectType, put = __cordl_internal_set__objectType)) ::System::Type* _objectType;

  /// @brief Field _signalBus, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__signalBus, put = __cordl_internal_set__signalBus)) ::Zenject::SignalBus* _signalBus;

  /// @brief Field _signalType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__signalType, put = __cordl_internal_set__signalType)) ::System::Type* _signalType;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x4afa5cc, size 0xa4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::Zenject::SignalCallbackWithLookupWrapper* New_ctor(::Zenject::SignalBindingBindInfo* signalBindInfo, ::System::Type* objectType, ::System::Guid lookupId,
                                                                     ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* methodGetter, ::Zenject::SignalBus* signalBus,
                                                                     ::Zenject::DiContainer* container);

  /// @brief Method OnSignalFired, addr 0x4afa404, size 0x1c8, virtual false, abstract: false, final false
  inline void OnSignalFired(::System::Object* signal);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Object* const& __cordl_internal_get__identifier() const;

  constexpr ::System::Object*& __cordl_internal_get__identifier();

  constexpr ::System::Guid const& __cordl_internal_get__lookupId() const;

  constexpr ::System::Guid& __cordl_internal_get__lookupId();

  constexpr ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* const& __cordl_internal_get__methodGetter() const;

  constexpr ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>*& __cordl_internal_get__methodGetter();

  constexpr ::System::Type* const& __cordl_internal_get__objectType() const;

  constexpr ::System::Type*& __cordl_internal_get__objectType();

  constexpr ::Zenject::SignalBus* const& __cordl_internal_get__signalBus() const;

  constexpr ::Zenject::SignalBus*& __cordl_internal_get__signalBus();

  constexpr ::System::Type* const& __cordl_internal_get__signalType() const;

  constexpr ::System::Type*& __cordl_internal_get__signalType();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__identifier(::System::Object* value);

  constexpr void __cordl_internal_set__lookupId(::System::Guid value);

  constexpr void __cordl_internal_set__methodGetter(::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* value);

  constexpr void __cordl_internal_set__objectType(::System::Type* value);

  constexpr void __cordl_internal_set__signalBus(::Zenject::SignalBus* value);

  constexpr void __cordl_internal_set__signalType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x4afa678, size 0x28c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4afa904, size 0x538, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4afa308, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalBindingBindInfo* signalBindInfo, ::System::Type* objectType, ::System::Guid lookupId,
                    ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* methodGetter, ::Zenject::SignalBus* signalBus, ::Zenject::DiContainer* container);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalCallbackWithLookupWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWithLookupWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalCallbackWithLookupWrapper(SignalCallbackWithLookupWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWithLookupWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalCallbackWithLookupWrapper(SignalCallbackWithLookupWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11990 };

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
static_assert(offsetof(::Zenject::SignalCallbackWithLookupWrapper, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalCallbackWithLookupWrapper, ____signalBus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalCallbackWithLookupWrapper, ____lookupId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalCallbackWithLookupWrapper, ____methodGetter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalCallbackWithLookupWrapper, ____objectType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalCallbackWithLookupWrapper, ____signalType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalCallbackWithLookupWrapper, ____identifier) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SignalCallbackWithLookupWrapper, 0x50>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalCallbackWithLookupWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalCallbackWithLookupWrapper*, "Zenject", "SignalCallbackWithLookupWrapper");
