#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimelineCreateUtilities)
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_0;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine::Timeline {
class __TimelineCreateUtilities____c__DisplayClass0_1;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13937))
// CS Name: ::TimelineCreateUtilities::<>c__DisplayClass0_0*
class CORDL_TYPE __TimelineCreateUtilities____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  static inline ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0* New_ctor();

  /// @brief Method .ctor addr 0x2c72174 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GenerateUniqueActorName>b__0 addr 0x2c7265c size 0x30 virtual false final false
  inline bool _GenerateUniqueActorName_b__0(::UnityEngine::ScriptableObject* x);

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineCreateUtilities____c__DisplayClass0_0(__TimelineCreateUtilities____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineCreateUtilities____c__DisplayClass0_0(__TimelineCreateUtilities____c__DisplayClass0_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineCreateUtilities____c__DisplayClass0_0();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::<>c__DisplayClass0_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13938))
// CS Name: ::TimelineCreateUtilities::<>c__DisplayClass0_1*
class CORDL_TYPE __TimelineCreateUtilities____c__DisplayClass0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field result, offset 0x10, size 0x8
  __declspec(property(get = __get_result, put = __set_result))::StringW result;

  constexpr ::StringW& __get_result();

  constexpr ::StringW const& __get_result() const;

  constexpr void __set_result(::StringW value);

  static inline ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1* New_ctor();

  /// @brief Method .ctor addr 0x2c7217c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GenerateUniqueActorName>b__1 addr 0x2c7268c size 0x30 virtual false final false
  inline bool _GenerateUniqueActorName_b__1(::UnityEngine::ScriptableObject* x);

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineCreateUtilities____c__DisplayClass0_1(__TimelineCreateUtilities____c__DisplayClass0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineCreateUtilities____c__DisplayClass0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineCreateUtilities____c__DisplayClass0_1(__TimelineCreateUtilities____c__DisplayClass0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineCreateUtilities____c__DisplayClass0_1();

public:
  /// @brief Field result, offset: 0x10, size: 0x8, def value: None
  ::StringW ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimelineCreateUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13939))
// CS Name: ::UnityEngine.Timeline::TimelineCreateUtilities*
class CORDL_TYPE TimelineCreateUtilities : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_1 = ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_1;

  using __c__DisplayClass0_0 = ::UnityEngine::Timeline::__TimelineCreateUtilities____c__DisplayClass0_0;

  /// @brief Method GenerateUniqueActorName addr 0x2c71e84 size 0x2f0 virtual false final false
  static inline ::StringW GenerateUniqueActorName(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* tracks, ::StringW name);

  /// @brief Method SaveAssetIntoObject addr 0x2c71ca0 size 0xe8 virtual false final false
  static inline void SaveAssetIntoObject(::UnityEngine::Object* childAsset, ::UnityEngine::Object* masterAsset);

  /// @brief Method RemoveAssetFromObject addr 0x2c71d88 size 0x9c virtual false final false
  static inline void RemoveAssetFromObject(::UnityEngine::Object* childAsset, ::UnityEngine::Object* masterAsset);

  /// @brief Method CreateAnimationClipForTrack addr 0x2c72184 size 0x1b8 virtual false final false
  static inline ::UnityEngine::AnimationClip* CreateAnimationClipForTrack(::StringW name, ::UnityEngine::Timeline::TrackAsset* track, bool isLegacy);

  /// @brief Method ValidateParentTrack addr 0x2c7233c size 0x320 virtual false final false
  static inline bool ValidateParentTrack(::UnityEngine::Timeline::TrackAsset* parent, ::System::Type* childType);

  // Ctor Parameters [CppParam { name: "", ty: "TimelineCreateUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineCreateUtilities(TimelineCreateUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineCreateUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineCreateUtilities(TimelineCreateUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineCreateUtilities();

public:
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
