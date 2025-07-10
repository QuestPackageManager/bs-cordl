#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedAudioClipSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(LocalizedAudioClipSO)
namespace GlobalNamespace {
class LocalizedAudioClipSO_LocalizedAudioClipInfo;
}
namespace GlobalNamespace {
class LocalizedAudioClipSO___c__DisplayClass4_0;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedAudioClipSO;
}
namespace GlobalNamespace {
class LocalizedAudioClipSO_LocalizedAudioClipInfo;
}
namespace GlobalNamespace {
class LocalizedAudioClipSO___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizedAudioClipSO);
MARK_REF_PTR_T(::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo);
MARK_REF_PTR_T(::GlobalNamespace::LocalizedAudioClipSO___c__DisplayClass4_0);
// Dependencies BGLib.Polyglot.Language, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedAudioClipSO/LocalizedAudioClipInfo
class CORDL_TYPE LocalizedAudioClipSO_LocalizedAudioClipInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language)) ::BGLib::Polyglot::Language language;

  /// @brief Field localizedAudioClip, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedAudioClip, put = __cordl_internal_set_localizedAudioClip)) ::UnityW<::UnityEngine::AudioClip> localizedAudioClip;

  static inline ::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo* New_ctor();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_language() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_language();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_localizedAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_localizedAudioClip();

  constexpr void __cordl_internal_set_language(::BGLib::Polyglot::Language value);

  constexpr void __cordl_internal_set_localizedAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  /// @brief Method .ctor, addr 0x3b16368, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedAudioClipSO_LocalizedAudioClipInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClipSO_LocalizedAudioClipInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedAudioClipSO_LocalizedAudioClipInfo(LocalizedAudioClipSO_LocalizedAudioClipInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClipSO_LocalizedAudioClipInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedAudioClipSO_LocalizedAudioClipInfo(LocalizedAudioClipSO_LocalizedAudioClipInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5067 };

  /// @brief Field language, offset: 0x10, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___language;

  /// @brief Field localizedAudioClip, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___localizedAudioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo, ___language) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo, ___localizedAudioClip) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.Polyglot.Language, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedAudioClipSO/<>c__DisplayClass4_0
class CORDL_TYPE LocalizedAudioClipSO___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language)) ::BGLib::Polyglot::Language language;

  static inline ::GlobalNamespace::LocalizedAudioClipSO___c__DisplayClass4_0* New_ctor();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_language() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_language();

  constexpr void __cordl_internal_set_language(::BGLib::Polyglot::Language value);

  /// @brief Method .ctor, addr 0x3b16358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_localizedAudioClip>b__0, addr 0x3b16370, size 0x24, virtual false, abstract: false, final false
  inline bool _get_localizedAudioClip_b__0(::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedAudioClipSO___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClipSO___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedAudioClipSO___c__DisplayClass4_0(LocalizedAudioClipSO___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClipSO___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedAudioClipSO___c__DisplayClass4_0(LocalizedAudioClipSO___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5068 };

  /// @brief Field language, offset: 0x10, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___language;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedAudioClipSO___c__DisplayClass4_0, ___language) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedAudioClipSO___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedAudioClipSO
class CORDL_TYPE LocalizedAudioClipSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using LocalizedAudioClipInfo = ::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo;

  using __c__DisplayClass4_0 = ::GlobalNamespace::LocalizedAudioClipSO___c__DisplayClass4_0;

  /// @brief Field _lastLocalizedAudioClipInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lastLocalizedAudioClipInfo,
                      put = __cordl_internal_set__lastLocalizedAudioClipInfo)) ::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo* _lastLocalizedAudioClipInfo;

  /// @brief Field _localizedAudioClipInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedAudioClipInfo,
                      put = __cordl_internal_set__localizedAudioClipInfo)) ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*,
                                                                                    ::Array<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*>*>
      _localizedAudioClipInfo;

  __declspec(property(get = get_localizedAudioClip)) ::UnityW<::UnityEngine::AudioClip> localizedAudioClip;

  static inline ::GlobalNamespace::LocalizedAudioClipSO* New_ctor();

  constexpr ::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo* const& __cordl_internal_get__lastLocalizedAudioClipInfo() const;

  constexpr ::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*& __cordl_internal_get__lastLocalizedAudioClipInfo();

  constexpr ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*, ::Array<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*>*> const&
  __cordl_internal_get__localizedAudioClipInfo() const;

  constexpr ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*, ::Array<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*>*>&
  __cordl_internal_get__localizedAudioClipInfo();

  constexpr void __cordl_internal_set__lastLocalizedAudioClipInfo(::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo* value);

  constexpr void __cordl_internal_set__localizedAudioClipInfo(
      ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*, ::Array<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*>*> value);

  /// @brief Method .ctor, addr 0x3b16360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localizedAudioClip, addr 0x3b1624c, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_localizedAudioClip();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedAudioClipSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClipSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedAudioClipSO(LocalizedAudioClipSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClipSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedAudioClipSO(LocalizedAudioClipSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5069 };

  /// @brief Field _localizedAudioClipInfo, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*, ::Array<::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*>*> ____localizedAudioClipInfo;

  /// @brief Field _lastLocalizedAudioClipInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo* ____lastLocalizedAudioClipInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedAudioClipSO, ____localizedAudioClipInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedAudioClipSO, ____lastLocalizedAudioClipInfo) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedAudioClipSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizedAudioClipSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedAudioClipSO*, "", "LocalizedAudioClipSO");
NEED_NO_BOX(::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedAudioClipSO_LocalizedAudioClipInfo*, "", "LocalizedAudioClipSO/LocalizedAudioClipInfo");
NEED_NO_BOX(::GlobalNamespace::LocalizedAudioClipSO___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedAudioClipSO___c__DisplayClass4_0*, "", "LocalizedAudioClipSO/<>c__DisplayClass4_0");
