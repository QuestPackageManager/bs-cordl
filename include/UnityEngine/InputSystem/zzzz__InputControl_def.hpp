#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControl)
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
struct __InputControl__ControlFlags;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputControl__ControlFlags;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputControl__ControlFlags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputControl);
// Type: ::ControlFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6214))
// CS Name: ::InputControl::ControlFlags
struct CORDL_TYPE __InputControl__ControlFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputControl__ControlFlags_Unwrapped
  enum struct ____InputControl__ControlFlags_Unwrapped : int32_t {
    __E_ConfigUpToDate = static_cast<int32_t>(0x1),
    __E_IsNoisy = static_cast<int32_t>(0x2),
    __E_IsSynthetic = static_cast<int32_t>(0x4),
    __E_IsButton = static_cast<int32_t>(0x8),
    __E_DontReset = static_cast<int32_t>(0x10),
    __E_SetupFinished = static_cast<int32_t>(0x20),
    __E_UsesStateFromOtherControl = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputControl__ControlFlags_Unwrapped() const noexcept {
    return static_cast<____InputControl__ControlFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputControl__ControlFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControl__ControlFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ConfigUpToDate value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const ConfigUpToDate;

  /// @brief Field IsNoisy value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const IsNoisy;

  /// @brief Field IsSynthetic value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const IsSynthetic;

  /// @brief Field IsButton value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const IsButton;

  /// @brief Field DontReset value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const DontReset;

  /// @brief Field SetupFinished value: static_cast<int32_t>(0x20)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const SetupFinished;

  /// @brief Field UsesStateFromOtherControl value: static_cast<int32_t>(0x40)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const UsesStateFromOtherControl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControl__ControlFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6566)), TypeDefinitionIndex(TypeDefinitionIndex(6699)), TypeDefinitionIndex(TypeDefinitionIndex(6671)),
// TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6214))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6215)) CS Name:
// ::UnityEngine.InputSystem::InputControl*
class CORDL_TYPE InputControl : public ::System::Object {
public:
  // Declarations
  using ControlFlags = ::UnityEngine::InputSystem::__InputControl__ControlFlags;

  /// @brief Field m_StateBlock, offset 0x10, size 0x10
  __declspec(property(get = __get_m_StateBlock, put = __set_m_StateBlock))::UnityEngine::InputSystem::LowLevel::InputStateBlock m_StateBlock;

  /// @brief Field m_Name, offset 0x20, size 0x10
  __declspec(property(get = __get_m_Name, put = __set_m_Name))::UnityEngine::InputSystem::Utilities::InternedString m_Name;

  /// @brief Field m_Path, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Path, put = __set_m_Path))::StringW m_Path;

  /// @brief Field m_DisplayName, offset 0x38, size 0x8
  __declspec(property(get = __get_m_DisplayName, put = __set_m_DisplayName))::StringW m_DisplayName;

  /// @brief Field m_DisplayNameFromLayout, offset 0x40, size 0x8
  __declspec(property(get = __get_m_DisplayNameFromLayout, put = __set_m_DisplayNameFromLayout))::StringW m_DisplayNameFromLayout;

  /// @brief Field m_ShortDisplayName, offset 0x48, size 0x8
  __declspec(property(get = __get_m_ShortDisplayName, put = __set_m_ShortDisplayName))::StringW m_ShortDisplayName;

  /// @brief Field m_ShortDisplayNameFromLayout, offset 0x50, size 0x8
  __declspec(property(get = __get_m_ShortDisplayNameFromLayout, put = __set_m_ShortDisplayNameFromLayout))::StringW m_ShortDisplayNameFromLayout;

  /// @brief Field m_Layout, offset 0x58, size 0x10
  __declspec(property(get = __get_m_Layout, put = __set_m_Layout))::UnityEngine::InputSystem::Utilities::InternedString m_Layout;

  /// @brief Field m_Variants, offset 0x68, size 0x10
  __declspec(property(get = __get_m_Variants, put = __set_m_Variants))::UnityEngine::InputSystem::Utilities::InternedString m_Variants;

  /// @brief Field m_Device, offset 0x78, size 0x8
  __declspec(property(get = __get_m_Device, put = __set_m_Device))::UnityEngine::InputSystem::InputDevice* m_Device;

  /// @brief Field m_Parent, offset 0x80, size 0x8
  __declspec(property(get = __get_m_Parent, put = __set_m_Parent))::UnityEngine::InputSystem::InputControl* m_Parent;

  /// @brief Field m_UsageCount, offset 0x88, size 0x4
  __declspec(property(get = __get_m_UsageCount, put = __set_m_UsageCount)) int32_t m_UsageCount;

  /// @brief Field m_UsageStartIndex, offset 0x8c, size 0x4
  __declspec(property(get = __get_m_UsageStartIndex, put = __set_m_UsageStartIndex)) int32_t m_UsageStartIndex;

  /// @brief Field m_AliasCount, offset 0x90, size 0x4
  __declspec(property(get = __get_m_AliasCount, put = __set_m_AliasCount)) int32_t m_AliasCount;

  /// @brief Field m_AliasStartIndex, offset 0x94, size 0x4
  __declspec(property(get = __get_m_AliasStartIndex, put = __set_m_AliasStartIndex)) int32_t m_AliasStartIndex;

  /// @brief Field m_ChildCount, offset 0x98, size 0x4
  __declspec(property(get = __get_m_ChildCount, put = __set_m_ChildCount)) int32_t m_ChildCount;

  /// @brief Field m_ChildStartIndex, offset 0x9c, size 0x4
  __declspec(property(get = __get_m_ChildStartIndex, put = __set_m_ChildStartIndex)) int32_t m_ChildStartIndex;

  /// @brief Field m_ControlFlags, offset 0xa0, size 0x4
  __declspec(property(get = __get_m_ControlFlags, put = __set_m_ControlFlags))::UnityEngine::InputSystem::__InputControl__ControlFlags m_ControlFlags;

  /// @brief Field m_DefaultState, offset 0xa8, size 0x10
  __declspec(property(get = __get_m_DefaultState, put = __set_m_DefaultState))::UnityEngine::InputSystem::Utilities::PrimitiveValue m_DefaultState;

  /// @brief Field m_MinValue, offset 0xb8, size 0x10
  __declspec(property(get = __get_m_MinValue, put = __set_m_MinValue))::UnityEngine::InputSystem::Utilities::PrimitiveValue m_MinValue;

  /// @brief Field m_MaxValue, offset 0xc8, size 0x10
  __declspec(property(get = __get_m_MaxValue, put = __set_m_MaxValue))::UnityEngine::InputSystem::Utilities::PrimitiveValue m_MaxValue;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_shortDisplayName, put = set_shortDisplayName))::StringW shortDisplayName;

  __declspec(property(get = get_path))::StringW path;

  __declspec(property(get = get_layout))::StringW layout;

  __declspec(property(get = get_variants))::StringW variants;

  __declspec(property(get = get_device))::UnityEngine::InputSystem::InputDevice* device;

  __declspec(property(get = get_parent))::UnityEngine::InputSystem::InputControl* parent;

  __declspec(property(get = get_children))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> children;

  __declspec(property(get = get_usages))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> usages;

  __declspec(property(get = get_aliases))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> aliases;

  __declspec(property(get = get_stateBlock))::UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock;

  __declspec(property(get = get_noisy, put = set_noisy)) bool noisy;

  __declspec(property(get = get_synthetic, put = set_synthetic)) bool synthetic;

  __declspec(property(get = get_Item))::UnityEngine::InputSystem::InputControl* Item[];

  __declspec(property(get = get_valueType))::System::Type* valueType;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_currentStatePtr))::cordl_internals::Ptr<void> currentStatePtr;

  __declspec(property(get = get_previousFrameStatePtr))::cordl_internals::Ptr<void> previousFrameStatePtr;

  __declspec(property(get = get_defaultStatePtr))::cordl_internals::Ptr<void> defaultStatePtr;

  __declspec(property(get = get_noiseMaskPtr))::cordl_internals::Ptr<void> noiseMaskPtr;

  __declspec(property(get = get_stateOffsetRelativeToDeviceRoot)) uint32_t stateOffsetRelativeToDeviceRoot;

  __declspec(property(get = get_isSetupFinished, put = set_isSetupFinished)) bool isSetupFinished;

  __declspec(property(get = get_isButton, put = set_isButton)) bool isButton;

  __declspec(property(get = get_isConfigUpToDate, put = set_isConfigUpToDate)) bool isConfigUpToDate;

  __declspec(property(get = get_dontReset, put = set_dontReset)) bool dontReset;

  __declspec(property(get = get_usesStateFromOtherControl, put = set_usesStateFromOtherControl)) bool usesStateFromOtherControl;

  __declspec(property(get = get_hasDefaultState)) bool hasDefaultState;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock& __get_m_StateBlock();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock const& __get_m_StateBlock() const;

  constexpr void __set_m_StateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock value);

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_m_Name();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_m_Name() const;

  constexpr void __set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr ::StringW& __get_m_Path();

  constexpr ::StringW const& __get_m_Path() const;

  constexpr void __set_m_Path(::StringW value);

  constexpr ::StringW& __get_m_DisplayName();

  constexpr ::StringW const& __get_m_DisplayName() const;

  constexpr void __set_m_DisplayName(::StringW value);

  constexpr ::StringW& __get_m_DisplayNameFromLayout();

  constexpr ::StringW const& __get_m_DisplayNameFromLayout() const;

  constexpr void __set_m_DisplayNameFromLayout(::StringW value);

  constexpr ::StringW& __get_m_ShortDisplayName();

  constexpr ::StringW const& __get_m_ShortDisplayName() const;

  constexpr void __set_m_ShortDisplayName(::StringW value);

  constexpr ::StringW& __get_m_ShortDisplayNameFromLayout();

  constexpr ::StringW const& __get_m_ShortDisplayNameFromLayout() const;

  constexpr void __set_m_ShortDisplayNameFromLayout(::StringW value);

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_m_Layout();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_m_Layout() const;

  constexpr void __set_m_Layout(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __get_m_Variants();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __get_m_Variants() const;

  constexpr void __set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr ::UnityEngine::InputSystem::InputDevice*& __get_m_Device();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> const& __get_m_Device() const;

  constexpr void __set_m_Device(::UnityEngine::InputSystem::InputDevice* value);

  constexpr ::UnityEngine::InputSystem::InputControl*& __get_m_Parent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> const& __get_m_Parent() const;

  constexpr void __set_m_Parent(::UnityEngine::InputSystem::InputControl* value);

  constexpr int32_t& __get_m_UsageCount();

  constexpr int32_t const& __get_m_UsageCount() const;

  constexpr void __set_m_UsageCount(int32_t value);

  constexpr int32_t& __get_m_UsageStartIndex();

  constexpr int32_t const& __get_m_UsageStartIndex() const;

  constexpr void __set_m_UsageStartIndex(int32_t value);

  constexpr int32_t& __get_m_AliasCount();

  constexpr int32_t const& __get_m_AliasCount() const;

  constexpr void __set_m_AliasCount(int32_t value);

  constexpr int32_t& __get_m_AliasStartIndex();

  constexpr int32_t const& __get_m_AliasStartIndex() const;

  constexpr void __set_m_AliasStartIndex(int32_t value);

  constexpr int32_t& __get_m_ChildCount();

  constexpr int32_t const& __get_m_ChildCount() const;

  constexpr void __set_m_ChildCount(int32_t value);

  constexpr int32_t& __get_m_ChildStartIndex();

  constexpr int32_t const& __get_m_ChildStartIndex() const;

  constexpr void __set_m_ChildStartIndex(int32_t value);

  constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags& __get_m_ControlFlags();

  constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags const& __get_m_ControlFlags() const;

  constexpr void __set_m_ControlFlags(::UnityEngine::InputSystem::__InputControl__ControlFlags value);

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __get_m_DefaultState();

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __get_m_DefaultState() const;

  constexpr void __set_m_DefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __get_m_MinValue();

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __get_m_MinValue() const;

  constexpr void __set_m_MinValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __get_m_MaxValue();

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __get_m_MaxValue() const;

  constexpr void __set_m_MaxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method get_name addr 0x2a63388 size 0x10 virtual false final false
  inline ::StringW get_name();

  /// @brief Method get_displayName addr 0x2a63398 size 0x58 virtual false final false
  inline ::StringW get_displayName();

  /// @brief Method set_displayName addr 0x2a63424 size 0x8 virtual false final false
  inline void set_displayName(::StringW value);

  /// @brief Method get_shortDisplayName addr 0x2a6342c size 0x44 virtual false final false
  inline ::StringW get_shortDisplayName();

  /// @brief Method set_shortDisplayName addr 0x2a63470 size 0x8 virtual false final false
  inline void set_shortDisplayName(::StringW value);

  /// @brief Method get_path addr 0x2a63478 size 0x40 virtual false final false
  inline ::StringW get_path();

  /// @brief Method get_layout addr 0x2a635ac size 0x10 virtual false final false
  inline ::StringW get_layout();

  /// @brief Method get_variants addr 0x2a635bc size 0x10 virtual false final false
  inline ::StringW get_variants();

  /// @brief Method get_device addr 0x2a635cc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  /// @brief Method get_parent addr 0x2a635d4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::InputControl* get_parent();

  /// @brief Method get_children addr 0x2a635dc size 0x70 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_children();

  /// @brief Method get_usages addr 0x2a6364c size 0x70 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_usages();

  /// @brief Method get_aliases addr 0x2a636bc size 0x70 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_aliases();

  /// @brief Method get_stateBlock addr 0x2a6372c size 0xc virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateBlock get_stateBlock();

  /// @brief Method get_noisy addr 0x2a63738 size 0xc virtual false final false
  inline bool get_noisy();

  /// @brief Method set_noisy addr 0x2a63744 size 0xd8 virtual false final false
  inline void set_noisy(bool value);

  /// @brief Method get_synthetic addr 0x2a6381c size 0xc virtual false final false
  inline bool get_synthetic();

  /// @brief Method set_synthetic addr 0x2a63828 size 0x1c virtual false final false
  inline void set_synthetic(bool value);

  /// @brief Method get_Item addr 0x2a63844 size 0x88 virtual false final false
  inline ::UnityEngine::InputSystem::InputControl* get_Item(::StringW path);

  /// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* get_valueType();

  /// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method ToString addr 0x2a6392c size 0x68 virtual true final false
  inline ::StringW ToString();

  /// @brief Method DebuggerDisplay addr 0x2a63994 size 0x124 virtual false final false
  inline ::StringW DebuggerDisplay();

  /// @brief Method EvaluateMagnitude addr 0x2a63b34 size 0x2c virtual false final false
  inline float_t EvaluateMagnitude();

  /// @brief Method EvaluateMagnitude addr 0x2a63b74 size 0x8 virtual true final false
  inline float_t EvaluateMagnitude(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void> statePtr, ::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize);

  /// @brief Method WriteValueFromBufferIntoState addr 0x2a63b7c size 0x68 virtual true final false
  inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueFromObjectIntoState addr 0x2a63be4 size 0x68 virtual true final false
  inline void WriteValueFromObjectIntoState(::System::Object* value, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr);

  /// @brief Method TryGetChildControl addr 0x2a63c4c size 0x84 virtual false final false
  inline ::UnityEngine::InputSystem::InputControl* TryGetChildControl(::StringW path);

  /// @brief Method TryGetChildControl addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TControl> inline TControl TryGetChildControl(::StringW path);

  /// @brief Method GetChildControl addr 0x2a63cd0 size 0x11c virtual false final false
  inline ::UnityEngine::InputSystem::InputControl* GetChildControl(::StringW path);

  /// @brief Method GetChildControl addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TControl> inline TControl GetChildControl(::StringW path);

  static inline ::UnityEngine::InputSystem::InputControl* New_ctor();

  /// @brief Method .ctor addr 0x2a63e98 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method FinishSetup addr 0x2a63eb8 size 0x4 virtual true final false
  inline void FinishSetup();

  /// @brief Method RefreshConfigurationIfNeeded addr 0x2a633f0 size 0x34 virtual false final false
  inline void RefreshConfigurationIfNeeded();

  /// @brief Method RefreshConfiguration addr 0x2a63ee4 size 0x4 virtual true final false
  inline void RefreshConfiguration();

  /// @brief Method get_currentStatePtr addr 0x2a63b60 size 0x14 virtual false final false
  inline ::cordl_internals::Ptr<void> get_currentStatePtr();

  /// @brief Method get_previousFrameStatePtr addr 0x2a640a4 size 0x14 virtual false final false
  inline ::cordl_internals::Ptr<void> get_previousFrameStatePtr();

  /// @brief Method get_defaultStatePtr addr 0x2a640b8 size 0x48 virtual false final false
  inline ::cordl_internals::Ptr<void> get_defaultStatePtr();

  /// @brief Method get_noiseMaskPtr addr 0x2a64100 size 0x48 virtual false final false
  inline ::cordl_internals::Ptr<void> get_noiseMaskPtr();

  /// @brief Method get_stateOffsetRelativeToDeviceRoot addr 0x2a64148 size 0x24 virtual false final false
  inline uint32_t get_stateOffsetRelativeToDeviceRoot();

  /// @brief Method get_isSetupFinished addr 0x2a6416c size 0xc virtual false final false
  inline bool get_isSetupFinished();

  /// @brief Method set_isSetupFinished addr 0x2a64178 size 0x1c virtual false final false
  inline void set_isSetupFinished(bool value);

  /// @brief Method get_isButton addr 0x2a64194 size 0xc virtual false final false
  inline bool get_isButton();

  /// @brief Method set_isButton addr 0x2a641a0 size 0x1c virtual false final false
  inline void set_isButton(bool value);

  /// @brief Method get_isConfigUpToDate addr 0x2a63ebc size 0xc virtual false final false
  inline bool get_isConfigUpToDate();

  /// @brief Method set_isConfigUpToDate addr 0x2a63ec8 size 0x1c virtual false final false
  inline void set_isConfigUpToDate(bool value);

  /// @brief Method get_dontReset addr 0x2a641bc size 0xc virtual false final false
  inline bool get_dontReset();

  /// @brief Method set_dontReset addr 0x2a641c8 size 0x1c virtual false final false
  inline void set_dontReset(bool value);

  /// @brief Method get_usesStateFromOtherControl addr 0x2a641e4 size 0xc virtual false final false
  inline bool get_usesStateFromOtherControl();

  /// @brief Method set_usesStateFromOtherControl addr 0x2a641f0 size 0x1c virtual false final false
  inline void set_usesStateFromOtherControl(bool value);

  /// @brief Method get_hasDefaultState addr 0x2a6420c size 0x20 virtual false final false
  inline bool get_hasDefaultState();

  /// @brief Method CallFinishSetupRecursive addr 0x2a6422c size 0xb0 virtual false final false
  inline void CallFinishSetupRecursive();

  /// @brief Method MakeChildPath addr 0x2a63dec size 0xac virtual false final false
  inline ::StringW MakeChildPath(::StringW path);

  /// @brief Method BakeOffsetIntoStateBlockRecursive addr 0x2a642dc size 0xb0 virtual false final false
  inline void BakeOffsetIntoStateBlockRecursive(uint32_t offset);

  /// @brief Method GetDeviceIndex addr 0x2a63ee8 size 0x1bc virtual false final false
  inline int32_t GetDeviceIndex();

  /// @brief Method IsValueConsideredPressed addr 0x2a6438c size 0xb8 virtual false final false
  inline bool IsValueConsideredPressed(float_t value);

  /// @brief Method AddProcessor addr 0x2a64444 size 0x4 virtual true final false
  inline void AddProcessor(::System::Object* first);

  // Ctor Parameters [CppParam { name: "", ty: "InputControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControl(InputControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControl(InputControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControl();

public:
  /// @brief Field m_StateBlock, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateBlock ___m_StateBlock;

  /// @brief Field m_Name, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___m_Name;

  /// @brief Field m_Path, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_Path;

  /// @brief Field m_DisplayName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_DisplayName;

  /// @brief Field m_DisplayNameFromLayout, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_DisplayNameFromLayout;

  /// @brief Field m_ShortDisplayName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_ShortDisplayName;

  /// @brief Field m_ShortDisplayNameFromLayout, offset: 0x50, size: 0x8, def value: None
  ::StringW ___m_ShortDisplayNameFromLayout;

  /// @brief Field m_Layout, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___m_Layout;

  /// @brief Field m_Variants, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___m_Variants;

  /// @brief Field m_Device, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* ___m_Device;

  /// @brief Field m_Parent, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* ___m_Parent;

  /// @brief Field m_UsageCount, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_UsageCount;

  /// @brief Field m_UsageStartIndex, offset: 0x8c, size: 0x4, def value: None
  int32_t ___m_UsageStartIndex;

  /// @brief Field m_AliasCount, offset: 0x90, size: 0x4, def value: None
  int32_t ___m_AliasCount;

  /// @brief Field m_AliasStartIndex, offset: 0x94, size: 0x4, def value: None
  int32_t ___m_AliasStartIndex;

  /// @brief Field m_ChildCount, offset: 0x98, size: 0x4, def value: None
  int32_t ___m_ChildCount;

  /// @brief Field m_ChildStartIndex, offset: 0x9c, size: 0x4, def value: None
  int32_t ___m_ChildStartIndex;

  /// @brief Field m_ControlFlags, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::__InputControl__ControlFlags ___m_ControlFlags;

  /// @brief Field m_DefaultState, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue ___m_DefaultState;

  /// @brief Field m_MinValue, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue ___m_MinValue;

  /// @brief Field m_MaxValue, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue ___m_MaxValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControl, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControl__ControlFlags, "UnityEngine.InputSystem", "InputControl/ControlFlags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControl*, "UnityEngine.InputSystem", "InputControl");
