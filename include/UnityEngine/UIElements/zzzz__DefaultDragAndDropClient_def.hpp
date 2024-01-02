#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultDragAndDropClient)
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DefaultDragAndDropClient;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DefaultDragAndDropClient);
// Type: UnityEngine.UIElements::DefaultDragAndDropClient
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6964))
// CS Name: ::UnityEngine.UIElements::DefaultDragAndDropClient*
class CORDL_TYPE DefaultDragAndDropClient : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_StartDragArgs, offset 0x10, size 0x8
  __declspec(property(get = __get_m_StartDragArgs, put = __set_m_StartDragArgs))::UnityEngine::UIElements::StartDragArgs* m_StartDragArgs;

  __declspec(property(get = get_userData))::System::Object* userData;

  __declspec(property(get = get_data))::UnityEngine::UIElements::IDragAndDropData* data;

  /// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDrop"
  constexpr operator ::UnityEngine::UIElements::IDragAndDrop*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDropData"
  constexpr operator ::UnityEngine::UIElements::IDragAndDropData*() noexcept;

  constexpr ::UnityEngine::UIElements::StartDragArgs*& __get_m_StartDragArgs();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StartDragArgs*> const& __get_m_StartDragArgs() const;

  constexpr void __set_m_StartDragArgs(::UnityEngine::UIElements::StartDragArgs* value);

  /// @brief Method get_userData, addr 0x2e0d2d8, size 0x18, virtual true, abstract: false, final true
  inline ::System::Object* get_userData();

  /// @brief Method StartDrag, addr 0x2e0d2f0, size 0x8, virtual true, abstract: false, final true
  inline void StartDrag(::UnityEngine::UIElements::StartDragArgs* args);

  /// @brief Method get_data, addr 0x2e0b628, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IDragAndDropData* get_data();

  static inline ::UnityEngine::UIElements::DefaultDragAndDropClient* New_ctor();

  /// @brief Method .ctor, addr 0x2e0d2d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDragAndDropClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultDragAndDropClient(DefaultDragAndDropClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDragAndDropClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultDragAndDropClient(DefaultDragAndDropClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultDragAndDropClient();

public:
  /// @brief Field m_StartDragArgs, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::StartDragArgs* ___m_StartDragArgs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DefaultDragAndDropClient, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DefaultDragAndDropClient, ___m_StartDragArgs) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DefaultDragAndDropClient);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultDragAndDropClient*, "UnityEngine.UIElements", "DefaultDragAndDropClient");
