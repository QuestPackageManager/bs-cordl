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
namespace System {
struct Guid;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____InputBinding__DisplayStringOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBinding__DisplayStringOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputBinding__DisplayStringOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DontIncludeInteractions value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions const DontIncludeInteractions;

  /// @brief Field DontOmitDevice value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions const DontOmitDevice;

  /// @brief Field DontUseShortDisplayNames value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions const DontUseShortDisplayNames;

  /// @brief Field IgnoreBindingOverrides value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions const IgnoreBindingOverrides;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::MatchOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____InputBinding__MatchOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBinding__MatchOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputBinding__MatchOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EmptyGroupMatchesAny value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputBinding__MatchOptions const EmptyGroupMatchesAny;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBinding__MatchOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBinding__MatchOptions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____InputBinding__Flags_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBinding__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputBinding__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Composite value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::__InputBinding__Flags const Composite;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::__InputBinding__Flags const None;

  /// @brief Field PartOfComposite value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::__InputBinding__Flags const PartOfComposite;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBinding__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBinding__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputBinding::<>c*
class CORDL_TYPE __InputBinding____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::__InputBinding____c* __9;

  /// @brief Field <>9__45_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__45_0, put = setStaticF___9__45_0))::System::Func_2<::StringW, bool>* __9__45_0;

  static inline ::UnityEngine::InputSystem::__InputBinding____c* New_ctor();

  /// @brief Method <MaskByGroups>b__45_0, addr 0x2b3f9d0, size 0x20, virtual false, abstract: false, final false
  inline bool _MaskByGroups_b__45_0(::StringW x);

  /// @brief Method .ctor, addr 0x2b3f9c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::__InputBinding____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__45_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::__InputBinding____c* value);

  static inline void setStaticF___9__45_0(::System::Func_2<::StringW, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBinding____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputBinding____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputBinding____c(__InputBinding____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputBinding____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputBinding____c(__InputBinding____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBinding____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBinding
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem::InputBinding
struct CORDL_TYPE InputBinding {
public:
  // Declarations
  using DisplayStringOptions = ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions;

  using Flags = ::UnityEngine::InputSystem::__InputBinding__Flags;

  using MatchOptions = ::UnityEngine::InputSystem::__InputBinding__MatchOptions;

  using __c = ::UnityEngine::InputSystem::__InputBinding____c;

  __declspec(property(get = get_action, put = set_action))::StringW action;

  __declspec(property(get = get_effectiveInteractions))::StringW effectiveInteractions;

  __declspec(property(get = get_effectivePath))::StringW effectivePath;

  __declspec(property(get = get_effectiveProcessors))::StringW effectiveProcessors;

  __declspec(property(get = get_groups, put = set_groups))::StringW groups;

  __declspec(property(get = get_hasOverrides)) bool hasOverrides;

  __declspec(property(get = get_id, put = set_id))::System::Guid id;

  __declspec(property(get = get_interactions, put = set_interactions))::StringW interactions;

  __declspec(property(get = get_isComposite, put = set_isComposite)) bool isComposite;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  __declspec(property(get = get_isPartOfComposite, put = set_isPartOfComposite)) bool isPartOfComposite;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_overrideInteractions, put = set_overrideInteractions))::StringW overrideInteractions;

  __declspec(property(get = get_overridePath, put = set_overridePath))::StringW overridePath;

  __declspec(property(get = get_overrideProcessors, put = set_overrideProcessors))::StringW overrideProcessors;

  __declspec(property(get = get_path, put = set_path))::StringW path;

  __declspec(property(get = get_processors, put = set_processors))::StringW processors;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>*();

  /// @brief Method Equals, addr 0x2b3f0e0, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2b3f014, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::InputBinding other);

  /// @brief Method GenerateId, addr 0x2b3ede0, size 0x34, virtual false, abstract: false, final false
  inline void GenerateId();

  /// @brief Method GetHashCode, addr 0x2b3f1bc, size 0xfc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetNameOfComposite, addr 0x2b3ed9c, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetNameOfComposite();

  /// @brief Method MaskByGroup, addr 0x2b3ee20, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputBinding MaskByGroup(::StringW group);

  /// @brief Method MaskByGroups, addr 0x2b3ee38, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputBinding MaskByGroups(::ArrayW<::StringW, ::Array<::StringW>*> groups);

  /// @brief Method Matches, addr 0x2b3f854, size 0x8, virtual false, abstract: false, final false
  inline bool Matches(::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method Matches, addr 0x2b3f85c, size 0x108, virtual false, abstract: false, final false
  inline bool Matches(ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::UnityEngine::InputSystem::__InputBinding__MatchOptions options);

  /// @brief Method RemoveOverrides, addr 0x2b3ee14, size 0xc, virtual false, abstract: false, final false
  inline void RemoveOverrides();

  /// @brief Method ToDisplayString, addr 0x2b3f3e8, size 0x46c, virtual false, abstract: false, final false
  inline ::StringW ToDisplayString(ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options,
                                   ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToDisplayString, addr 0x2b3f3bc, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW ToDisplayString(::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ToString, addr 0x2b3f2b8, size 0x104, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TriggersAction, addr 0x2b364dc, size 0x58, virtual false, abstract: false, final false
  inline bool TriggersAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method .ctor, addr 0x2b3ed7c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::StringW action, ::StringW groups, ::StringW processors, ::StringW interactions, ::StringW name);

  /// @brief Method get_action, addr 0x2b3ed28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_action();

  /// @brief Method get_effectiveInteractions, addr 0x2b3ef98, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_effectiveInteractions();

  /// @brief Method get_effectivePath, addr 0x2b37efc, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_effectivePath();

  /// @brief Method get_effectiveProcessors, addr 0x2b3efb0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_effectiveProcessors();

  /// @brief Method get_groups, addr 0x2b3ed18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groups();

  /// @brief Method get_hasOverrides, addr 0x2b3ed54, size 0x28, virtual false, abstract: false, final false
  inline bool get_hasOverrides();

  /// @brief Method get_id, addr 0x2b3ec44, size 0x48, virtual false, abstract: false, final false
  inline ::System::Guid get_id();

  /// @brief Method get_interactions, addr 0x2b3ecd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_interactions();

  /// @brief Method get_isComposite, addr 0x2b36534, size 0xc, virtual false, abstract: false, final false
  inline bool get_isComposite();

  /// @brief Method get_isEmpty, addr 0x2b3efc8, size 0x4c, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method get_isPartOfComposite, addr 0x2b36540, size 0xc, virtual false, abstract: false, final false
  inline bool get_isPartOfComposite();

  /// @brief Method get_name, addr 0x2b3ec34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_overrideInteractions, addr 0x2b3ece8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_overrideInteractions();

  /// @brief Method get_overridePath, addr 0x2b3ecc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_overridePath();

  /// @brief Method get_overrideProcessors, addr 0x2b3ed08, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_overrideProcessors();

  /// @brief Method get_path, addr 0x2b3ecb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method get_processors, addr 0x2b3ecf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_processors();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>* i___System__IEquatable_1___UnityEngine__InputSystem__InputBinding_();

  /// @brief Method op_Equality, addr 0x2b37018, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right);

  /// @brief Method op_Inequality, addr 0x2b3f170, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right);

  /// @brief Method set_action, addr 0x2b3ed30, size 0x8, virtual false, abstract: false, final false
  inline void set_action(::StringW value);

  /// @brief Method set_groups, addr 0x2b3ed20, size 0x8, virtual false, abstract: false, final false
  inline void set_groups(::StringW value);

  /// @brief Method set_id, addr 0x2b3ec8c, size 0x2c, virtual false, abstract: false, final false
  inline void set_id(::System::Guid value);

  /// @brief Method set_interactions, addr 0x2b3ece0, size 0x8, virtual false, abstract: false, final false
  inline void set_interactions(::StringW value);

  /// @brief Method set_isComposite, addr 0x2b3ed38, size 0x1c, virtual false, abstract: false, final false
  inline void set_isComposite(bool value);

  /// @brief Method set_isPartOfComposite, addr 0x2b36834, size 0x1c, virtual false, abstract: false, final false
  inline void set_isPartOfComposite(bool value);

  /// @brief Method set_name, addr 0x2b3ec3c, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_overrideInteractions, addr 0x2b3ecf0, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideInteractions(::StringW value);

  /// @brief Method set_overridePath, addr 0x2b3ecd0, size 0x8, virtual false, abstract: false, final false
  inline void set_overridePath(::StringW value);

  /// @brief Method set_overrideProcessors, addr 0x2b3ed10, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideProcessors(::StringW value);

  /// @brief Method set_path, addr 0x2b3ecc0, size 0x8, virtual false, abstract: false, final false
  inline void set_path(::StringW value);

  /// @brief Method set_processors, addr 0x2b3ed00, size 0x8, virtual false, abstract: false, final false
  inline void set_processors(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBinding();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "m_Path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Processors", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Groups", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::__InputBinding__Flags", modifiers: "", def_value: None }, CppParam { name: "m_OverridePath", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "m_OverrideInteractions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_OverrideProcessors", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr InputBinding(::StringW m_Name, ::StringW m_Id, ::StringW m_Path, ::StringW m_Interactions, ::StringW m_Processors, ::StringW m_Groups, ::StringW m_Action,
                         ::UnityEngine::InputSystem::__InputBinding__Flags m_Flags, ::StringW m_OverridePath, ::StringW m_OverrideInteractions, ::StringW m_OverrideProcessors) noexcept;

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

  /// @brief Field Separator offset 0xffffffff size 0x2
  static constexpr char16_t Separator{ u';' };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field kSeparatorString offset 0xffffffff size 0x8
  static constexpr ::ConstString kSeparatorString{ u";" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBinding, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_Id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_Path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_Interactions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_Processors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_Groups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_Action) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_Flags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_OverridePath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_OverrideInteractions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBinding, m_OverrideProcessors) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions, "UnityEngine.InputSystem", "InputBinding/DisplayStringOptions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBinding__Flags, "UnityEngine.InputSystem", "InputBinding/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBinding__MatchOptions, "UnityEngine.InputSystem", "InputBinding/MatchOptions");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputBinding____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBinding____c*, "UnityEngine.InputSystem", "InputBinding/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBinding, "UnityEngine.InputSystem", "InputBinding");
