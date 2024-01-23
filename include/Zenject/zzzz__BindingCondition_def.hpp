#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindingCondition)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
// Type: Zenject::BindingCondition
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11159))
// CS Name: ::Zenject::BindingCondition*
class CORDL_TYPE BindingCondition : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Zenject::BindingCondition* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ef6528, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2ef6654, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::Zenject::InjectContext* c);

  /// @brief Method BeginInvoke, addr 0x2ef6668, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Zenject::InjectContext* c, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2ef6688, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "BindingCondition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingCondition(BindingCondition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingCondition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingCondition(BindingCondition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingCondition();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingCondition, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::BindingCondition);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingCondition*, "Zenject", "BindingCondition");
