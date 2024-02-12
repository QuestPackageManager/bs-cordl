#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoadResourceFunction)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class LoadResourceFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::LoadResourceFunction);
// Type: UnityEngine.UIElements::LoadResourceFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6130))
// CS Name: ::UnityEngine.UIElements::LoadResourceFunction*
class CORDL_TYPE LoadResourceFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::LoadResourceFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2de7c30, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2de7d08, size 0x14, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> Invoke(::StringW pathName, ::System::Type* type, float_t dpiScaling);

  // Ctor Parameters [CppParam { name: "", ty: "LoadResourceFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadResourceFunction(LoadResourceFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadResourceFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadResourceFunction(LoadResourceFunction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadResourceFunction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LoadResourceFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::LoadResourceFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LoadResourceFunction*, "UnityEngine.UIElements", "LoadResourceFunction");
