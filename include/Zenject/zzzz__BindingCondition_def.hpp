#pragma once
// IWYU pragma private; include "Zenject/BindingCondition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(BindingCondition)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class BindingCondition;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::BindingCondition);
// Dependencies System.MulticastDelegate
namespace Zenject {
// Is value type: false
// CS Name: Zenject.BindingCondition
class CORDL_TYPE BindingCondition : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4b2b270, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Zenject::InjectContext* c, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4b2b290, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4b2b25c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::Zenject::InjectContext* c);

  static inline ::Zenject::BindingCondition* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4b2b15c, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingCondition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingCondition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingCondition(BindingCondition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingCondition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingCondition(BindingCondition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12496 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingCondition, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::BindingCondition);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingCondition*, "Zenject", "BindingCondition");
