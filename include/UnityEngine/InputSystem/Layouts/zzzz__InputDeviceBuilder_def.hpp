#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceBuilder)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceBuilder_RefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDevice_ControlBitRangeNode;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceBuilder;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceBuilder_RefInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance);
// Dependencies System.IDisposable
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
#pragma pack(push, 0)
struct CORDL_TYPE InputDeviceBuilder_RefInstance {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x4628510, size 0x8c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceBuilder_RefInstance();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7025 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Dependencies System.IDisposable, UnityEngine.InputSystem.Layouts.InputControlLayout::CacheRefInstance
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceBuilder
struct CORDL_TYPE InputDeviceBuilder {
public:
  // Declarations
  using RefInstance = ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder s_Instance;

  /// @brief Field s_InstanceRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_InstanceRef, put = setStaticF_s_InstanceRef)) int32_t s_InstanceRef;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddChildControl, addr 0x4626308, size 0x750, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* AddChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                   ::UnityEngine::InputSystem::InputControl* parent, ::ByRef<bool> haveChildrenUsingStateFromOtherControls,
                                                                   ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem controlItem, int32_t childIndex, ::StringW nameOverride);

  /// @brief Method AddChildControlIfMissing, addr 0x4626a58, size 0xb0, virtual false, abstract: false, final false
  inline void AddChildControlIfMissing(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                       ::UnityEngine::InputSystem::InputControl* parent, ::ByRef<bool> haveChildrenUsingStateFromOtherControls,
                                       ::ByRef<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem);

  /// @brief Method AddChildControls, addr 0x4624fe0, size 0x6b8, virtual false, abstract: false, final false
  inline void AddChildControls(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                               ::UnityEngine::InputSystem::InputControl* parent, ::ByRef<bool> haveChildrenUsingStateFromOtherControls);

  /// @brief Method AddChildren, addr 0x4628178, size 0x110, virtual false, abstract: false, final false
  inline void AddChildren(::ByRef<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode> parent, ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode left,
                          ::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode right);

  /// @brief Method AddControlToNode, addr 0x4628288, size 0x140, virtual false, abstract: false, final false
  inline void AddControlToNode(::UnityEngine::InputSystem::InputControl* control, ::ByRef<int32_t> controlIndiciesNextFreeIndex, int32_t nodeIndex);

  /// @brief Method AddParentDisplayNameRecursive, addr 0x4627404, size 0xb0, virtual false, abstract: false, final false
  static inline void AddParentDisplayNameRecursive(::UnityEngine::InputSystem::InputControl* control, ::System::Text::StringBuilder* stringBuilder, bool shortName);

  /// @brief Method AddProcessors, addr 0x4626c4c, size 0x234, virtual false, abstract: false, final false
  static inline void AddProcessors(::UnityEngine::InputSystem::InputControl* control, ::ByRef<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem, ::StringW layoutName);

  /// @brief Method ApplyUseStateFrom, addr 0x4625fa4, size 0x1cc, virtual false, abstract: false, final false
  static inline void ApplyUseStateFrom(::UnityEngine::InputSystem::InputControl* parent, ::ByRef<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem,
                                       ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout);

  /// @brief Method ChildControlOverridePath, addr 0x4626b08, size 0x90, virtual false, abstract: false, final false
  inline ::StringW ChildControlOverridePath(::UnityEngine::InputSystem::InputControl* parent, ::UnityEngine::InputSystem::Utilities::InternedString controlName);

  /// @brief Method ComputeStateLayout, addr 0x4625698, size 0x90c, virtual false, abstract: false, final false
  static inline void ComputeStateLayout(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method Dispose, addr 0x46249a8, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FinalizeControlHierarchy, addr 0x46246cc, size 0x250, virtual false, abstract: false, final false
  inline void FinalizeControlHierarchy();

  /// @brief Method FinalizeControlHierarchyRecursive, addr 0x46274b4, size 0x428, virtual false, abstract: false, final false
  inline void FinalizeControlHierarchyRecursive(::UnityEngine::InputSystem::InputControl* control, int32_t controlIndex,
                                                ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> allControls, bool noisy, bool dontReset,
                                                ::ByRef<int32_t> controlIndiciesNextFreeIndex);

  /// @brief Method FindOrLoadLayout, addr 0x46249b0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::StringW name);

  /// @brief Method Finish, addr 0x462491c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* Finish();

  /// @brief Method GetBestMidPoint, addr 0x4627c48, size 0x530, virtual false, abstract: false, final false
  inline uint16_t GetBestMidPoint(::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode parent, uint16_t startOffset);

  /// @brief Method GetControlIndex, addr 0x46283c8, size 0xb0, virtual false, abstract: false, final false
  inline uint16_t GetControlIndex(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method InsertChildControl, addr 0x4626e80, size 0x31c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* InsertChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variant,
                                                                      ::UnityEngine::InputSystem::InputControl* parent, ::ByRef<bool> haveChildrenUsingStateFromOtherControls,
                                                                      ::ByRef<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem);

  /// @brief Method InsertChildControlOverride, addr 0x4626170, size 0x198, virtual false, abstract: false, final false
  inline void InsertChildControlOverride(::UnityEngine::InputSystem::InputControl* parent, ::ByRef<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> controlItem);

  /// @brief Method InsertControlBitRangeNode, addr 0x46278dc, size 0x36c, virtual false, abstract: false, final false
  inline void InsertControlBitRangeNode(::ByRef<::UnityEngine::InputSystem::InputDevice_ControlBitRangeNode> parent, ::UnityEngine::InputSystem::InputControl* control,
                                        ::ByRef<int32_t> controlIndiciesNextFreeIndex, uint16_t startOffset);

  /// @brief Method InstantiateLayout, addr 0x4624a0c, size 0x5d4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* InstantiateLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                     ::UnityEngine::InputSystem::Utilities::InternedString name, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method InstantiateLayout, addr 0x4624660, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* InstantiateLayout(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                     ::UnityEngine::InputSystem::Utilities::InternedString name, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Ref, addr 0x46284bc, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance Ref();

  /// @brief Method Reset, addr 0x4624934, size 0x74, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetDisplayName, addr 0x46271fc, size 0x208, virtual false, abstract: false, final false
  inline void SetDisplayName(::UnityEngine::InputSystem::InputControl* control, ::StringW longDisplayNameFromLayout, ::StringW shortDisplayNameFromLayout, bool shortName);

  /// @brief Method SetFormat, addr 0x4626b98, size 0xb4, virtual false, abstract: false, final false
  static inline void SetFormat(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem controlItem);

  /// @brief Method Setup, addr 0x462450c, size 0x154, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                    ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription);

  /// @brief Method ShiftChildIndicesInHierarchyOneUp, addr 0x462719c, size 0x60, virtual false, abstract: false, final false
  static inline void ShiftChildIndicesInHierarchyOneUp(::UnityEngine::InputSystem::InputDevice* device, int32_t startIndex, ::UnityEngine::InputSystem::InputControl* exceptControl);

  static inline ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder getStaticF_s_Instance();

  static inline int32_t getStaticF_s_InstanceRef();

  /// @brief Method get_instance, addr 0x4628478, size 0x44, virtual false, abstract: false, final false
  static inline ::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder> get_instance();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  static inline void setStaticF_s_Instance(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder value);

  static inline void setStaticF_s_InstanceRef(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceBuilder();

  // Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }, CppParam { name: "m_LayoutCacheRef", ty:
  // "::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance", modifiers: "", def_value: None }, CppParam { name: "m_ChildControlOverrides", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*", modifiers: "", def_value: None }, CppParam { name:
  // "m_StateOffsetToControlMap", ty: "::System::Collections::Generic::List_1<uint32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_StringBuilder", ty: "::System::Text::StringBuilder*",
  // modifiers: "", def_value: None }]
  constexpr InputDeviceBuilder(::UnityEngine::InputSystem::InputDevice* m_Device, ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance m_LayoutCacheRef,
                               ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* m_ChildControlOverrides,
                               ::System::Collections::Generic::List_1<uint32_t>* m_StateOffsetToControlMap, ::System::Text::StringBuilder* m_StringBuilder) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7026 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field kSizeForControlUsingStateFromOtherControl offset 0xffffffff size 0x4
  static constexpr uint32_t kSizeForControlUsingStateFromOtherControl{ static_cast<uint32_t>(0xffffffffu) };

  /// @brief Field m_Device, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* m_Device;

  /// @brief Field m_LayoutCacheRef, offset: 0x8, size: 0x1, def value: None
  ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance m_LayoutCacheRef;

  /// @brief Field m_ChildControlOverrides, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* m_ChildControlOverrides;

  /// @brief Field m_StateOffsetToControlMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* m_StateOffsetToControlMap;

  /// @brief Field m_StringBuilder, offset: 0x20, size: 0x8, def value: None
  ::System::Text::StringBuilder* m_StringBuilder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_Device) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_LayoutCacheRef) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_ChildControlOverrides) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_StateOffsetToControlMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_StringBuilder) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, "UnityEngine.InputSystem.Layouts", "InputDeviceBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance, "UnityEngine.InputSystem.Layouts", "InputDeviceBuilder/RefInstance");
