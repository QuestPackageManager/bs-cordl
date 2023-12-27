#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBinding)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct __InputBinding__DisplayStringOptions;
}
namespace UnityEngine::InputSystem {
struct __InputBinding__MatchOptions;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class __InputBinding____c;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::InputSystem {
struct __InputBinding__Flags;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputBinding__DisplayStringOptions;
}
namespace UnityEngine::InputSystem {
struct __InputBinding__Flags;
}
namespace UnityEngine::InputSystem {
struct __InputBinding__MatchOptions;
}
namespace UnityEngine::InputSystem {
class __InputBinding____c;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions);
MARK_VAL_T(::UnityEngine::InputSystem::__InputBinding__Flags);
MARK_VAL_T(::UnityEngine::InputSystem::__InputBinding__MatchOptions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputBinding____c);
MARK_VAL_T(::UnityEngine::InputSystem::InputBinding);
// Type: ::DisplayStringOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6183))
// CS Name: ::InputBinding::DisplayStringOptions
struct CORDL_TYPE __InputBinding__DisplayStringOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputBinding__DisplayStringOptions_Unwrapped
  enum struct ____InputBinding__DisplayStringOptions_Unwrapped : int32_t {
    __E_DontUseShortDisplayNames = static_cast<int32_t>(0x1),
    __E_DontOmitDevice = static_cast<int32_t>(0x2),
    __E_DontIncludeInteractions = static_cast<int32_t>(0x4),
    __E_IgnoreBindingOverrides = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputBinding__DisplayStringOptions_Unwrapped() const noexcept {
    return static_cast<____InputBinding__DisplayStringOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputBinding__DisplayStringOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBinding__DisplayStringOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DontUseShortDisplayNames value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions const DontUseShortDisplayNames;

  /// @brief Field DontOmitDevice value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions const DontOmitDevice;

  /// @brief Field DontIncludeInteractions value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions const DontIncludeInteractions;

  /// @brief Field IgnoreBindingOverrides value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions const IgnoreBindingOverrides;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::MatchOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6184))
// CS Name: ::InputBinding::MatchOptions
struct CORDL_TYPE __InputBinding__MatchOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputBinding__MatchOptions_Unwrapped
  enum struct ____InputBinding__MatchOptions_Unwrapped : int32_t {
    __E_EmptyGroupMatchesAny = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputBinding__MatchOptions_Unwrapped() const noexcept {
    return static_cast<____InputBinding__MatchOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputBinding__MatchOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBinding__MatchOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field EmptyGroupMatchesAny value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputBinding__MatchOptions const EmptyGroupMatchesAny;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBinding__MatchOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6185))
// CS Name: ::InputBinding::Flags
struct CORDL_TYPE __InputBinding__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputBinding__Flags_Unwrapped
  enum struct ____InputBinding__Flags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Composite = static_cast<int32_t>(0x4),
    __E_PartOfComposite = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputBinding__Flags_Unwrapped() const noexcept {
    return static_cast<____InputBinding__Flags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputBinding__Flags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBinding__Flags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::__InputBinding__Flags const None;

  /// @brief Field Composite value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::__InputBinding__Flags const Composite;

  /// @brief Field PartOfComposite value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::__InputBinding__Flags const PartOfComposite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBinding__Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6186))
// CS Name: ::InputBinding::<>c*
class CORDL_TYPE __InputBinding____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::__InputBinding____c* __9;

  /// @brief Field <>9__45_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__45_0, put = setStaticF___9__45_0))::System::Func_2<::StringW, bool>* __9__45_0;

  static inline void setStaticF___9(::UnityEngine::InputSystem::__InputBinding____c* value);

  static inline ::UnityEngine::InputSystem::__InputBinding____c* getStaticF___9();

  static inline void setStaticF___9__45_0(::System::Func_2<::StringW, bool>* value);

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__45_0();

  static inline ::UnityEngine::InputSystem::__InputBinding____c* New_ctor();

  /// @brief Method .ctor addr 0x2a55d88 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <MaskByGroups>b__45_0 addr 0x2a55d90 size 0x20 virtual false final false
  inline bool _MaskByGroups_b__45_0(::StringW x);

  // Ctor Parameters [CppParam { name: "", ty: "__InputBinding____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputBinding____c(__InputBinding____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputBinding____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputBinding____c(__InputBinding____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBinding____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBinding____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBinding
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6187))
// CS Name: ::UnityEngine.InputSystem::InputBinding
struct CORDL_TYPE InputBinding {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::__InputBinding____c;

  using Flags = ::UnityEngine::InputSystem::__InputBinding__Flags;

  using MatchOptions = ::UnityEngine::InputSystem::__InputBinding__MatchOptions;

  using DisplayStringOptions = ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_id, put = set_id))::System::Guid id;

  __declspec(property(get = get_path, put = set_path))::StringW path;

  __declspec(property(get = get_overridePath, put = set_overridePath))::StringW overridePath;

  __declspec(property(get = get_interactions, put = set_interactions))::StringW interactions;

  __declspec(property(get = get_overrideInteractions, put = set_overrideInteractions))::StringW overrideInteractions;

  __declspec(property(get = get_processors, put = set_processors))::StringW processors;

  __declspec(property(get = get_overrideProcessors, put = set_overrideProcessors))::StringW overrideProcessors;

  __declspec(property(get = get_groups, put = set_groups))::StringW groups;

  __declspec(property(get = get_action, put = set_action))::StringW action;

  __declspec(property(get = get_isComposite, put = set_isComposite)) bool isComposite;

  __declspec(property(get = get_isPartOfComposite, put = set_isPartOfComposite)) bool isPartOfComposite;

  __declspec(property(get = get_hasOverrides)) bool hasOverrides;

  __declspec(property(get = get_effectivePath))::StringW effectivePath;

  __declspec(property(get = get_effectiveInteractions))::StringW effectiveInteractions;

  __declspec(property(get = get_effectiveProcessors))::StringW effectiveProcessors;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>*();

  /// @brief Method get_name addr 0x2a54ff4 size 0x8 virtual false final false
  inline ::StringW get_name();

  /// @brief Method set_name addr 0x2a54ffc size 0x8 virtual false final false
  inline void set_name(::StringW value);

  /// @brief Method get_id addr 0x2a55004 size 0x48 virtual false final false
  inline ::System::Guid get_id();

  /// @brief Method set_id addr 0x2a5504c size 0x2c virtual false final false
  inline void set_id(::System::Guid value);

  /// @brief Method get_path addr 0x2a55078 size 0x8 virtual false final false
  inline ::StringW get_path();

  /// @brief Method set_path addr 0x2a55080 size 0x8 virtual false final false
  inline void set_path(::StringW value);

  /// @brief Method get_overridePath addr 0x2a55088 size 0x8 virtual false final false
  inline ::StringW get_overridePath();

  /// @brief Method set_overridePath addr 0x2a55090 size 0x8 virtual false final false
  inline void set_overridePath(::StringW value);

  /// @brief Method get_interactions addr 0x2a55098 size 0x8 virtual false final false
  inline ::StringW get_interactions();

  /// @brief Method set_interactions addr 0x2a550a0 size 0x8 virtual false final false
  inline void set_interactions(::StringW value);

  /// @brief Method get_overrideInteractions addr 0x2a550a8 size 0x8 virtual false final false
  inline ::StringW get_overrideInteractions();

  /// @brief Method set_overrideInteractions addr 0x2a550b0 size 0x8 virtual false final false
  inline void set_overrideInteractions(::StringW value);

  /// @brief Method get_processors addr 0x2a550b8 size 0x8 virtual false final false
  inline ::StringW get_processors();

  /// @brief Method set_processors addr 0x2a550c0 size 0x8 virtual false final false
  inline void set_processors(::StringW value);

  /// @brief Method get_overrideProcessors addr 0x2a550c8 size 0x8 virtual false final false
  inline ::StringW get_overrideProcessors();

  /// @brief Method set_overrideProcessors addr 0x2a550d0 size 0x8 virtual false final false
  inline void set_overrideProcessors(::StringW value);

  /// @brief Method get_groups addr 0x2a550d8 size 0x8 virtual false final false
  inline ::StringW get_groups();

  /// @brief Method set_groups addr 0x2a550e0 size 0x8 virtual false final false
  inline void set_groups(::StringW value);

  /// @brief Method get_action addr 0x2a550e8 size 0x8 virtual false final false
  inline ::StringW get_action();

  /// @brief Method set_action addr 0x2a550f0 size 0x8 virtual false final false
  inline void set_action(::StringW value);

  /// @brief Method get_isComposite addr 0x2a4c8f4 size 0xc virtual false final false
  inline bool get_isComposite();

  /// @brief Method set_isComposite addr 0x2a550f8 size 0x1c virtual false final false
  inline void set_isComposite(bool value);

  /// @brief Method get_isPartOfComposite addr 0x2a4c900 size 0xc virtual false final false
  inline bool get_isPartOfComposite();

  /// @brief Method set_isPartOfComposite addr 0x2a4cbf4 size 0x1c virtual false final false
  inline void set_isPartOfComposite(bool value);

  /// @brief Method get_hasOverrides addr 0x2a55114 size 0x28 virtual false final false
  inline bool get_hasOverrides();

  /// @brief Method .ctor addr 0x2a5513c size 0x20 virtual false final false
  inline void _ctor(::StringW path, ::StringW action, ::StringW groups, ::StringW processors, ::StringW interactions, ::StringW name);

  /// @brief Method GetNameOfComposite addr 0x2a5515c size 0x44 virtual false final false
  inline ::StringW GetNameOfComposite();

  /// @brief Method GenerateId addr 0x2a551a0 size 0x34 virtual false final false
  inline void GenerateId();

  /// @brief Method RemoveOverrides addr 0x2a551d4 size 0xc virtual false final false
  inline void RemoveOverrides();

  /// @brief Method MaskByGroup addr 0x2a551e0 size 0x18 virtual false final false
  static inline ::UnityEngine::InputSystem::InputBinding MaskByGroup(::StringW group);

  /// @brief Method MaskByGroups addr 0x2a551f8 size 0x160 virtual false final false
  static inline ::UnityEngine::InputSystem::InputBinding MaskByGroups(::ArrayW<::StringW, ::Array<::StringW>*> groups);

  /// @brief Method get_effectivePath addr 0x2a4e2bc size 0x18 virtual false final false
  inline ::StringW get_effectivePath();

  /// @brief Method get_effectiveInteractions addr 0x2a55358 size 0x18 virtual false final false
  inline ::StringW get_effectiveInteractions();

  /// @brief Method get_effectiveProcessors addr 0x2a55370 size 0x18 virtual false final false
  inline ::StringW get_effectiveProcessors();

  /// @brief Method get_isEmpty addr 0x2a55388 size 0x4c virtual false final false
  inline bool get_isEmpty();

  /// @brief Method Equals addr 0x2a553d4 size 0xcc virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::InputBinding other);

  /// @brief Method Equals addr 0x2a554a0 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method op_Equality addr 0x2a4d3d8 size 0x34 virtual false final false
  static inline bool op_Equality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right);

  /// @brief Method op_Inequality addr 0x2a55530 size 0x4c virtual false final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right);

  /// @brief Method GetHashCode addr 0x2a5557c size 0xfc virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2a55678 size 0x104 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToDisplayString addr 0x2a5577c size 0x2c virtual false final false
  inline ::StringW ToDisplayString(::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToDisplayString addr 0x2a557a8 size 0x46c virtual false final false
  inline ::StringW ToDisplayString(ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options,
                                   ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method TriggersAction addr 0x2a4c89c size 0x58 virtual false final false
  inline bool TriggersAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Matches addr 0x2a55c14 size 0x8 virtual false final false
  inline bool Matches(::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method Matches addr 0x2a55c1c size 0x108 virtual false final false
  inline bool Matches(ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::UnityEngine::InputSystem::__InputBinding__MatchOptions options);

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "m_Path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Processors", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Groups", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::__InputBinding__Flags", modifiers: "", def_value: None }, CppParam { name: "m_OverridePath", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "m_OverrideInteractions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_OverrideProcessors", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr InputBinding(::StringW m_Name, ::StringW m_Id, ::StringW m_Path, ::StringW m_Interactions, ::StringW m_Processors, ::StringW m_Groups, ::StringW m_Action,
                         ::UnityEngine::InputSystem::__InputBinding__Flags m_Flags, ::StringW m_OverridePath, ::StringW m_OverrideInteractions, ::StringW m_OverrideProcessors) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBinding();

  /// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_Id, offset: 0x8, size: 0x8, def value: None
  ::StringW m_Id;

  /// @brief Field m_Path, offset: 0x10, size: 0x8, def value: None
  ::StringW m_Path;

  /// @brief Field m_Interactions, offset: 0x18, size: 0x8, def value: None
  ::StringW m_Interactions;

  /// @brief Field m_Processors, offset: 0x20, size: 0x8, def value: None
  ::StringW m_Processors;

  /// @brief Field m_Groups, offset: 0x28, size: 0x8, def value: None
  ::StringW m_Groups;

  /// @brief Field m_Action, offset: 0x30, size: 0x8, def value: None
  ::StringW m_Action;

  /// @brief Field m_Flags, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::InputSystem::__InputBinding__Flags m_Flags;

  /// @brief Field m_OverridePath, offset: 0x40, size: 0x8, def value: None
  ::StringW m_OverridePath;

  /// @brief Field m_OverrideInteractions, offset: 0x48, size: 0x8, def value: None
  ::StringW m_OverrideInteractions;

  /// @brief Field m_OverrideProcessors, offset: 0x50, size: 0x8, def value: None
  ::StringW m_OverrideProcessors;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field Separator offset 0xffffffff size 0x2
  static constexpr char16_t Separator{ u';' };

  /// @brief Field kSeparatorString offset 0xffffffff size 0x8
  static constexpr ::ConstString kSeparatorString{ u";" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBinding, 0x58>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions, "UnityEngine.InputSystem", "InputBinding/DisplayStringOptions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBinding__Flags, "UnityEngine.InputSystem", "InputBinding/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBinding__MatchOptions, "UnityEngine.InputSystem", "InputBinding/MatchOptions");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputBinding____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBinding____c*, "UnityEngine.InputSystem", "InputBinding/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBinding, "UnityEngine.InputSystem", "InputBinding");
