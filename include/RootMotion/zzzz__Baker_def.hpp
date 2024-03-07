#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__Baker_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Baker)
namespace RootMotion {
struct __Baker__Mode;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
struct __Baker__Mode;
}
namespace RootMotion {
class Baker;
}
// Write type traits
MARK_VAL_T(::RootMotion::__Baker__Mode);
MARK_REF_PTR_T(::RootMotion::Baker);
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: true
// CS Name: ::Baker::Mode
struct CORDL_TYPE __Baker__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Baker__Mode_Unwrapped
  enum struct ____Baker__Mode_Unwrapped : int32_t {
    __E_AnimationClips = static_cast<int32_t>(0x0),
    __E_AnimationStates = static_cast<int32_t>(0x1),
    __E_PlayableDirector = static_cast<int32_t>(0x2),
    __E_Realtime = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Baker__Mode_Unwrapped() const noexcept {
    return static_cast<____Baker__Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Baker__Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Baker__Mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AnimationClips value: static_cast<int32_t>(0x0)
  static ::RootMotion::__Baker__Mode const AnimationClips;

  /// @brief Field AnimationStates value: static_cast<int32_t>(0x1)
  static ::RootMotion::__Baker__Mode const AnimationStates;

  /// @brief Field PlayableDirector value: static_cast<int32_t>(0x2)
  static ::RootMotion::__Baker__Mode const PlayableDirector;

  /// @brief Field Realtime value: static_cast<int32_t>(0x3)
  static ::RootMotion::__Baker__Mode const Realtime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::__Baker__Mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::__Baker__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion
// Type: RootMotion::Baker
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::Baker*
class CORDL_TYPE Baker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Mode = ::RootMotion::__Baker__Mode;

  /// @brief Field <bakingProgress>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__bakingProgress_k__BackingField, put = __cordl_internal_set__bakingProgress_k__BackingField)) float_t _bakingProgress_k__BackingField;

  /// @brief Field <clipLength>k__BackingField, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__clipLength_k__BackingField, put = __cordl_internal_set__clipLength_k__BackingField)) float_t _clipLength_k__BackingField;

  /// @brief Field <isBaking>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isBaking_k__BackingField, put = __cordl_internal_set__isBaking_k__BackingField)) bool _isBaking_k__BackingField;

  /// @brief Field animationClips, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_animationClips,
                      put = __cordl_internal_set_animationClips))::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*> animationClips;

  /// @brief Field animationStates, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_animationStates, put = __cordl_internal_set_animationStates))::ArrayW<::StringW, ::Array<::StringW>*> animationStates;

  /// @brief Field animator, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_animator, put = __cordl_internal_set_animator))::UnityW<::UnityEngine::Animator> animator;

  /// @brief Field appendName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_appendName, put = __cordl_internal_set_appendName))::StringW appendName;

  __declspec(property(get = get_bakingProgress, put = set_bakingProgress)) float_t bakingProgress;

  __declspec(property(get = get_clipLength, put = set_clipLength)) float_t clipLength;

  /// @brief Field director, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_director, put = __cordl_internal_set_director))::UnityW<::UnityEngine::Playables::PlayableDirector> director;

  /// @brief Field frameRate, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_frameRate, put = __cordl_internal_set_frameRate)) int32_t frameRate;

  __declspec(property(get = get_isBaking, put = set_isBaking)) bool isBaking;

  /// @brief Field keyReductionError, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_keyReductionError, put = __cordl_internal_set_keyReductionError)) float_t keyReductionError;

  /// @brief Field loop, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_loop, put = __cordl_internal_set_loop)) bool loop;

  /// @brief Field mode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode))::RootMotion::__Baker__Mode mode;

  /// @brief Field saveName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_saveName, put = __cordl_internal_set_saveName))::StringW saveName;

  /// @brief Field saveToFolder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_saveToFolder, put = __cordl_internal_set_saveToFolder))::StringW saveToFolder;

  /// @brief Method ASThread, addr 0x1335298, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method BakeClip, addr 0x1335310, size 0x4, virtual false, abstract: false, final false
  inline void BakeClip();

  /// @brief Method GetCharacterRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::Transform> GetCharacterRoot();

  static inline ::RootMotion::Baker* New_ctor();

  /// @brief Method OnSetCurves, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSetCurves(ByRef<::UnityEngine::AnimationClip*> clip);

  /// @brief Method OnSetKeyframes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSetKeyframes(float_t time, bool lastFrame);

  /// @brief Method OnSetLoopFrame, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSetLoopFrame(float_t time);

  /// @brief Method OnStartBaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnStartBaking();

  /// @brief Method OpenScriptReference, addr 0x1335210, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x13351cc, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method StartBaking, addr 0x1335314, size 0x4, virtual false, abstract: false, final false
  inline void StartBaking();

  /// @brief Method StopBaking, addr 0x1335318, size 0x4, virtual false, abstract: false, final false
  inline void StopBaking();

  /// @brief Method SupportGroup, addr 0x1335254, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  constexpr float_t const& __cordl_internal_get__bakingProgress_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__bakingProgress_k__BackingField();

  constexpr float_t const& __cordl_internal_get__clipLength_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__clipLength_k__BackingField();

  constexpr bool const& __cordl_internal_get__isBaking_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isBaking_k__BackingField();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*> const& __cordl_internal_get_animationClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*>& __cordl_internal_get_animationClips();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_animationStates() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_animationStates();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator();

  constexpr ::StringW const& __cordl_internal_get_appendName() const;

  constexpr ::StringW& __cordl_internal_get_appendName();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_director() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_director();

  constexpr int32_t const& __cordl_internal_get_frameRate() const;

  constexpr int32_t& __cordl_internal_get_frameRate();

  constexpr float_t const& __cordl_internal_get_keyReductionError() const;

  constexpr float_t& __cordl_internal_get_keyReductionError();

  constexpr bool const& __cordl_internal_get_loop() const;

  constexpr bool& __cordl_internal_get_loop();

  constexpr ::RootMotion::__Baker__Mode const& __cordl_internal_get_mode() const;

  constexpr ::RootMotion::__Baker__Mode& __cordl_internal_get_mode();

  constexpr ::StringW const& __cordl_internal_get_saveName() const;

  constexpr ::StringW& __cordl_internal_get_saveName();

  constexpr ::StringW const& __cordl_internal_get_saveToFolder() const;

  constexpr ::StringW& __cordl_internal_get_saveToFolder();

  constexpr void __cordl_internal_set__bakingProgress_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__clipLength_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__isBaking_k__BackingField(bool value);

  constexpr void __cordl_internal_set_animationClips(::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*> value);

  constexpr void __cordl_internal_set_animationStates(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_appendName(::StringW value);

  constexpr void __cordl_internal_set_director(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr void __cordl_internal_set_frameRate(int32_t value);

  constexpr void __cordl_internal_set_keyReductionError(float_t value);

  constexpr void __cordl_internal_set_loop(bool value);

  constexpr void __cordl_internal_set_mode(::RootMotion::__Baker__Mode value);

  constexpr void __cordl_internal_set_saveName(::StringW value);

  constexpr void __cordl_internal_set_saveToFolder(::StringW value);

  /// @brief Method .ctor, addr 0x133531c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakingProgress, addr 0x13352f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bakingProgress();

  /// @brief Method get_clipLength, addr 0x1335300, size 0x8, virtual false, abstract: false, final false
  inline float_t get_clipLength();

  /// @brief Method get_isBaking, addr 0x13352dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBaking();

  /// @brief Method set_bakingProgress, addr 0x13352f8, size 0x8, virtual false, abstract: false, final false
  inline void set_bakingProgress(float_t value);

  /// @brief Method set_clipLength, addr 0x1335308, size 0x8, virtual false, abstract: false, final false
  inline void set_clipLength(float_t value);

  /// @brief Method set_isBaking, addr 0x13352e4, size 0xc, virtual false, abstract: false, final false
  inline void set_isBaking(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Baker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Baker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Baker(Baker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Baker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Baker(Baker const&) = delete;

  /// @brief Field frameRate, offset: 0x18, size: 0x4, def value: None
  int32_t ___frameRate;

  /// @brief Field keyReductionError, offset: 0x1c, size: 0x4, def value: None
  float_t ___keyReductionError;

  /// @brief Field mode, offset: 0x20, size: 0x4, def value: None
  ::RootMotion::__Baker__Mode ___mode;

  /// @brief Field animationClips, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AnimationClip>, ::Array<::UnityW<::UnityEngine::AnimationClip>>*> ___animationClips;

  /// @brief Field animationStates, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___animationStates;

  /// @brief Field loop, offset: 0x38, size: 0x1, def value: None
  bool ___loop;

  /// @brief Field saveToFolder, offset: 0x40, size: 0x8, def value: None
  ::StringW ___saveToFolder;

  /// @brief Field appendName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___appendName;

  /// @brief Field saveName, offset: 0x50, size: 0x8, def value: None
  ::StringW ___saveName;

  /// @brief Field <isBaking>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____isBaking_k__BackingField;

  /// @brief Field <bakingProgress>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  float_t ____bakingProgress_k__BackingField;

  /// @brief Field animator, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___animator;

  /// @brief Field director, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ___director;

  /// @brief Field <clipLength>k__BackingField, offset: 0x70, size: 0x4, def value: None
  float_t ____clipLength_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Baker, 0x78>, "Size mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___frameRate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___keyReductionError) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___animationClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___animationStates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___loop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___saveToFolder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___appendName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___saveName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ____isBaking_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ____bakingProgress_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___animator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ___director) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::Baker, ____clipLength_k__BackingField) == 0x70, "Offset mismatch!");

} // namespace RootMotion
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::__Baker__Mode, "RootMotion", "Baker/Mode");
NEED_NO_BOX(::RootMotion::Baker);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Baker*, "RootMotion", "Baker");
