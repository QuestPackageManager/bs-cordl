#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineCreateUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimelineCreateUtilities)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_0;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineCreateUtilities;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_0;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineCreateUtilities);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::TimelineCreateUtilities::<>c__DisplayClass0_0*
class CORDL_TYPE __TimelineCreateUtilities____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  static inline ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0* New_ctor();

  /// @brief Method <GenerateUniqueActorName>b__0, addr 0x47b788c, size 0x30, virtual false, abstract: false, final false
  inline bool _GenerateUniqueActorName_b__0(::UnityEngine::ScriptableObject* x);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x47b73a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineCreateUtilities____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineCreateUtilities____c__DisplayClass0_0(__TimelineCreateUtilities____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineCreateUtilities____c__DisplayClass0_0(__TimelineCreateUtilities____c__DisplayClass0_0 const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15852 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0, ___name) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::<>c__DisplayClass0_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::TimelineCreateUtilities::<>c__DisplayClass0_1*
class CORDL_TYPE __TimelineCreateUtilities____c__DisplayClass0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field result, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result)) ::StringW result;

  static inline ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1* New_ctor();

  /// @brief Method <GenerateUniqueActorName>b__1, addr 0x47b78bc, size 0x30, virtual false, abstract: false, final false
  inline bool _GenerateUniqueActorName_b__1(::UnityEngine::ScriptableObject* x);

  constexpr ::StringW const& __cordl_internal_get_result() const;

  constexpr ::StringW& __cordl_internal_get_result();

  constexpr void __cordl_internal_set_result(::StringW value);

  /// @brief Method .ctor, addr 0x47b73b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineCreateUtilities____c__DisplayClass0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineCreateUtilities____c__DisplayClass0_1(__TimelineCreateUtilities____c__DisplayClass0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineCreateUtilities____c__DisplayClass0_1(__TimelineCreateUtilities____c__DisplayClass0_1 const&) = delete;

  /// @brief Field result, offset: 0x10, size: 0x8, def value: None
  ::StringW ___result;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1, ___result) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimelineCreateUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::TimelineCreateUtilities*
class CORDL_TYPE TimelineCreateUtilities : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0;

  using __c__DisplayClass0_1 = ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1;

  /// @brief Method CreateAnimationClipForTrack, addr 0x47b73b8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AnimationClip> CreateAnimationClipForTrack(::StringW name, ::UnityEngine::Timeline::TrackAsset* track, bool isLegacy);

  /// @brief Method GenerateUniqueActorName, addr 0x47b70c4, size 0x2e4, virtual false, abstract: false, final false
  static inline ::StringW GenerateUniqueActorName(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* tracks, ::StringW name);

  /// @brief Method RemoveAssetFromObject, addr 0x47b6fc8, size 0x9c, virtual false, abstract: false, final false
  static inline void RemoveAssetFromObject(::UnityEngine::Object* childAsset, ::UnityEngine::Object* masterAsset);

  /// @brief Method SaveAssetIntoObject, addr 0x47b6ee0, size 0xe8, virtual false, abstract: false, final false
  static inline void SaveAssetIntoObject(::UnityEngine::Object* childAsset, ::UnityEngine::Object* masterAsset);

  /// @brief Method ValidateParentTrack, addr 0x47b7570, size 0x31c, virtual false, abstract: false, final false
  static inline bool ValidateParentTrack(::UnityEngine::Timeline::TrackAsset* parent, ::System::Type* childType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineCreateUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineCreateUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineCreateUtilities(TimelineCreateUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineCreateUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineCreateUtilities(TimelineCreateUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineCreateUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineCreateUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineCreateUtilities*, "UnityEngine.Timeline", "TimelineCreateUtilities");
NEED_NO_BOX(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0*, "UnityEngine.Timeline", "TimelineCreateUtilities/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1*, "UnityEngine.Timeline", "TimelineCreateUtilities/<>c__DisplayClass0_1");
