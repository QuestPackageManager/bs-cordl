#pragma once
// IWYU pragma private; include "Zenject/SignalSubscriptionId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SignalSubscriptionId)
namespace System {
class Object;
}
namespace Zenject {
struct BindingId;
}
// Forward declare root types
namespace Zenject {
struct SignalSubscriptionId;
}
// Write type traits
MARK_VAL_T(::Zenject::SignalSubscriptionId);
// Dependencies System.IEquatable`1<T>, Zenject.BindingId
namespace Zenject {
// Is value type: true
// CS Name: Zenject.SignalSubscriptionId
struct CORDL_TYPE SignalSubscriptionId {
public:
  // Declarations
  __declspec(property(get = get_Callback)) ::System::Object* Callback;

  __declspec(property(get = get_SignalId)) ::Zenject::BindingId SignalId;

  /// @brief Convert operator to "::System::IEquatable_1<::Zenject::SignalSubscriptionId>"
  constexpr operator ::System::IEquatable_1<::Zenject::SignalSubscriptionId>*();

  /// @brief Method Equals, addr 0x4afd4b4, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* that);

  /// @brief Method Equals, addr 0x4afd544, size 0xb0, virtual true, abstract: false, final true
  inline bool Equals(::Zenject::SignalSubscriptionId that);

  /// @brief Method GetHashCode, addr 0x4afd46c, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x4afd44c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindingId signalId, ::System::Object* callback);

  /// @brief Method get_Callback, addr 0x4afd464, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Callback();

  /// @brief Method get_SignalId, addr 0x4afd458, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::BindingId get_SignalId();

  /// @brief Convert to "::System::IEquatable_1<::Zenject::SignalSubscriptionId>"
  constexpr ::System::IEquatable_1<::Zenject::SignalSubscriptionId>* i___System__IEquatable_1___Zenject__SignalSubscriptionId_();

  /// @brief Method op_Equality, addr 0x4afd5f4, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::Zenject::SignalSubscriptionId left, ::Zenject::SignalSubscriptionId right);

  /// @brief Method op_Inequality, addr 0x4afd624, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Zenject::SignalSubscriptionId left, ::Zenject::SignalSubscriptionId right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalSubscriptionId();

  // Ctor Parameters [CppParam { name: "_signalId", ty: "::Zenject::BindingId", modifiers: "", def_value: None }, CppParam { name: "_callback", ty: "::System::Object*", modifiers: "", def_value: None
  // }]
  constexpr SignalSubscriptionId(::Zenject::BindingId _signalId, ::System::Object* _callback) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12004 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _signalId, offset: 0x0, size: 0x10, def value: None
  ::Zenject::BindingId _signalId;

  /// @brief Field _callback, offset: 0x10, size: 0x8, def value: None
  ::System::Object* _callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SignalSubscriptionId, _signalId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalSubscriptionId, _callback) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SignalSubscriptionId, 0x18>, "Size mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalSubscriptionId, "Zenject", "SignalSubscriptionId");
