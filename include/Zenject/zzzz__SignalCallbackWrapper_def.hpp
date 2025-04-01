#pragma once
// IWYU pragma private; include "Zenject/SignalCallbackWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignalCallbackWrapper)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
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
class SignalCallbackWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalCallbackWrapper);
// Dependencies System.IDisposable, System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SignalCallbackWrapper
class CORDL_TYPE SignalCallbackWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__action, put = __cordl_internal_set__action)) ::System::Action_1<::System::Object*>* _action;

  /// @brief Field _identifier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__identifier, put = __cordl_internal_set__identifier)) ::System::Object* _identifier;

  /// @brief Field _signalBus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__signalBus, put = __cordl_internal_set__signalBus)) ::Zenject::SignalBus* _signalBus;

  /// @brief Field _signalType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__signalType, put = __cordl_internal_set__signalType)) ::System::Type* _signalType;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x4af4f3c, size 0xa4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::Zenject::SignalCallbackWrapper* New_ctor(::Zenject::SignalBindingBindInfo* bindInfo, ::System::Action_1<::System::Object*>* action, ::Zenject::SignalBus* signalBus);

  /// @brief Method OnSignalFired, addr 0x4af4f18, size 0x24, virtual false, abstract: false, final false
  inline void OnSignalFired(::System::Object* signal);

  constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get__action() const;

  constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get__action();

  constexpr ::System::Object* const& __cordl_internal_get__identifier() const;

  constexpr ::System::Object*& __cordl_internal_get__identifier();

  constexpr ::Zenject::SignalBus* const& __cordl_internal_get__signalBus() const;

  constexpr ::Zenject::SignalBus*& __cordl_internal_get__signalBus();

  constexpr ::System::Type* const& __cordl_internal_get__signalType() const;

  constexpr ::System::Type*& __cordl_internal_get__signalType();

  constexpr void __cordl_internal_set__action(::System::Action_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__identifier(::System::Object* value);

  constexpr void __cordl_internal_set__signalBus(::Zenject::SignalBus* value);

  constexpr void __cordl_internal_set__signalType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x4af4fe0, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4af5154, size 0x388, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4af4e54, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalBindingBindInfo* bindInfo, ::System::Action_1<::System::Object*>* action, ::Zenject::SignalBus* signalBus);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalCallbackWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalCallbackWrapper(SignalCallbackWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalCallbackWrapper(SignalCallbackWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11991 };

  /// @brief Field _signalBus, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SignalBus* ____signalBus;

  /// @brief Field _action, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::System::Object*>* ____action;

  /// @brief Field _signalType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____signalType;

  /// @brief Field _identifier, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____identifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SignalCallbackWrapper, ____signalBus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalCallbackWrapper, ____action) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalCallbackWrapper, ____signalType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalCallbackWrapper, ____identifier) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SignalCallbackWrapper, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalCallbackWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalCallbackWrapper*, "Zenject", "SignalCallbackWrapper");
