#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DragAndDropUtility)
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DragAndDropUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DragAndDropUtility);
// Type: UnityEngine.UIElements::DragAndDropUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DragAndDropUtility*
class CORDL_TYPE DragAndDropUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DragAndDrop, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DragAndDrop, put = setStaticF_s_DragAndDrop))::UnityEngine::UIElements::IDragAndDrop* s_DragAndDrop;

  /// @brief Field s_MakeClientFunc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MakeClientFunc, put = setStaticF_s_MakeClientFunc))::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* s_MakeClientFunc;

  static inline ::UnityEngine::UIElements::IDragAndDrop* getStaticF_s_DragAndDrop();

  static inline ::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* getStaticF_s_MakeClientFunc();

  /// @brief Method get_dragAndDrop, addr 0x3358790, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IDragAndDrop* get_dragAndDrop();

  static inline void setStaticF_s_DragAndDrop(::UnityEngine::UIElements::IDragAndDrop* value);

  static inline void setStaticF_s_MakeClientFunc(::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DragAndDropUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DragAndDropUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DragAndDropUtility(DragAndDropUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DragAndDropUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DragAndDropUtility(DragAndDropUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragAndDropUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DragAndDropUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragAndDropUtility*, "UnityEngine.UIElements", "DragAndDropUtility");
