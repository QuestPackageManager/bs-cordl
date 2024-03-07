#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LocalizedAudioClipSO)
namespace GlobalNamespace {
class __LocalizedAudioClipSO__LocalizedAudioClipInfo;
}
namespace GlobalNamespace {
class __LocalizedAudioClipSO____c__DisplayClass4_0;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedAudioClipSO;
}
namespace GlobalNamespace {
class __LocalizedAudioClipSO__LocalizedAudioClipInfo;
}
namespace GlobalNamespace {
class __LocalizedAudioClipSO____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizedAudioClipSO);
MARK_REF_PTR_T(::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo);
MARK_REF_PTR_T(::GlobalNamespace::__LocalizedAudioClipSO____c__DisplayClass4_0);
// Type: ::LocalizedAudioClipInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalizedAudioClipSO::LocalizedAudioClipInfo*
class CORDL_TYPE __LocalizedAudioClipSO__LocalizedAudioClipInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language))::BGLib::Polyglot::Language language;

  /// @brief Field localizedAudioClip, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedAudioClip, put = __cordl_internal_set_localizedAudioClip))::UnityW<::UnityEngine::AudioClip> localizedAudioClip;

  static inline ::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo* New_ctor();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_language() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_language();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_localizedAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_localizedAudioClip();

  constexpr void __cordl_internal_set_language(::BGLib::Polyglot::Language value);

  constexpr void __cordl_internal_set_localizedAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  /// @brief Method .ctor, addr 0x2458e70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalizedAudioClipSO__LocalizedAudioClipInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedAudioClipSO__LocalizedAudioClipInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalizedAudioClipSO__LocalizedAudioClipInfo(__LocalizedAudioClipSO__LocalizedAudioClipInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedAudioClipSO__LocalizedAudioClipInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalizedAudioClipSO__LocalizedAudioClipInfo(__LocalizedAudioClipSO__LocalizedAudioClipInfo const&) = delete;

  /// @brief Field language, offset: 0x10, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___language;

  /// @brief Field localizedAudioClip, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___localizedAudioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo, ___language) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo, ___localizedAudioClip) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalizedAudioClipSO::<>c__DisplayClass4_0*
class CORDL_TYPE __LocalizedAudioClipSO____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language))::BGLib::Polyglot::Language language;

  static inline ::GlobalNamespace::__LocalizedAudioClipSO____c__DisplayClass4_0* New_ctor();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_language() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_language();

  constexpr void __cordl_internal_set_language(::BGLib::Polyglot::Language value);

  /// @brief Method .ctor, addr 0x2458e60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_localizedAudioClip>b__0, addr 0x2458e78, size 0x24, virtual false, abstract: false, final false
  inline bool _get_localizedAudioClip_b__0(::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalizedAudioClipSO____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedAudioClipSO____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalizedAudioClipSO____c__DisplayClass4_0(__LocalizedAudioClipSO____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedAudioClipSO____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalizedAudioClipSO____c__DisplayClass4_0(__LocalizedAudioClipSO____c__DisplayClass4_0 const&) = delete;

  /// @brief Field language, offset: 0x10, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___language;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalizedAudioClipSO____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalizedAudioClipSO____c__DisplayClass4_0, ___language) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalizedAudioClipSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalizedAudioClipSO*
class CORDL_TYPE LocalizedAudioClipSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using LocalizedAudioClipInfo = ::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__LocalizedAudioClipSO____c__DisplayClass4_0;

  /// @brief Field _lastLocalizedAudioClipInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lastLocalizedAudioClipInfo,
                      put = __cordl_internal_set__lastLocalizedAudioClipInfo))::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo* _lastLocalizedAudioClipInfo;

  /// @brief Field _localizedAudioClipInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedAudioClipInfo,
                      put = __cordl_internal_set__localizedAudioClipInfo))::ArrayW<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*,
                                                                                   ::Array<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*>*> _localizedAudioClipInfo;

  __declspec(property(get = get_localizedAudioClip))::UnityW<::UnityEngine::AudioClip> localizedAudioClip;

  static inline ::GlobalNamespace::LocalizedAudioClipSO* New_ctor();

  constexpr ::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*& __cordl_internal_get__lastLocalizedAudioClipInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*> const& __cordl_internal_get__lastLocalizedAudioClipInfo() const;

  constexpr ::ArrayW<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*, ::Array<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*>*> const&
  __cordl_internal_get__localizedAudioClipInfo() const;

  constexpr ::ArrayW<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*, ::Array<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*>*>&
  __cordl_internal_get__localizedAudioClipInfo();

  constexpr void __cordl_internal_set__lastLocalizedAudioClipInfo(::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo* value);

  constexpr void __cordl_internal_set__localizedAudioClipInfo(
      ::ArrayW<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*, ::Array<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*>*> value);

  /// @brief Method .ctor, addr 0x2458e68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localizedAudioClip, addr 0x2458d50, size 0x110, virtual false, abstract: false, final false
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

  /// @brief Field _localizedAudioClipInfo, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*, ::Array<::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*>*> ____localizedAudioClipInfo;

  /// @brief Field _lastLocalizedAudioClipInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo* ____lastLocalizedAudioClipInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedAudioClipSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedAudioClipSO, ____localizedAudioClipInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedAudioClipSO, ____lastLocalizedAudioClipInfo) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizedAudioClipSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedAudioClipSO*, "", "LocalizedAudioClipSO");
NEED_NO_BOX(::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalizedAudioClipSO__LocalizedAudioClipInfo*, "", "LocalizedAudioClipSO/LocalizedAudioClipInfo");
NEED_NO_BOX(::GlobalNamespace::__LocalizedAudioClipSO____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalizedAudioClipSO____c__DisplayClass4_0*, "", "LocalizedAudioClipSO/<>c__DisplayClass4_0");
