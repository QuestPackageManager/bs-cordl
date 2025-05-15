#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedTextAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextAsset)
namespace GlobalNamespace {
class LocalizedTextAsset_TextInfo;
}
namespace GlobalNamespace {
class LocalizedTextAsset___c;
}
namespace GlobalNamespace {
class LocalizedTextAsset___c__DisplayClass6_0;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace GlobalNamespace {
class LocalizedTextAsset_TextInfo;
}
namespace GlobalNamespace {
class LocalizedTextAsset___c;
}
namespace GlobalNamespace {
class LocalizedTextAsset___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizedTextAsset);
MARK_REF_PTR_T(::GlobalNamespace::LocalizedTextAsset_TextInfo);
MARK_REF_PTR_T(::GlobalNamespace::LocalizedTextAsset___c);
MARK_REF_PTR_T(::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0);
// Dependencies BGLib.Polyglot.Language, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedTextAsset/TextInfo
class CORDL_TYPE LocalizedTextAsset_TextInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language)) ::BGLib::Polyglot::Language language;

  /// @brief Field localizedText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedText, put = __cordl_internal_set_localizedText)) ::UnityW<::UnityEngine::TextAsset> localizedText;

  static inline ::GlobalNamespace::LocalizedTextAsset_TextInfo* New_ctor();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_language() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_language();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_localizedText() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_localizedText();

  constexpr void __cordl_internal_set_language(::BGLib::Polyglot::Language value);

  constexpr void __cordl_internal_set_localizedText(::UnityW<::UnityEngine::TextAsset> value);

  /// @brief Method .ctor, addr 0x3b16a4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextAsset_TextInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset_TextInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextAsset_TextInfo(LocalizedTextAsset_TextInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset_TextInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextAsset_TextInfo(LocalizedTextAsset_TextInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5070 };

  /// @brief Field language, offset: 0x10, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___language;

  /// @brief Field localizedText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___localizedText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedTextAsset_TextInfo, ___language) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedTextAsset_TextInfo, ___localizedText) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedTextAsset_TextInfo, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedTextAsset/<>c
class CORDL_TYPE LocalizedTextAsset___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LocalizedTextAsset___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::GlobalNamespace::LocalizedTextAsset_TextInfo*, bool>* __9__6_0;

  static inline ::GlobalNamespace::LocalizedTextAsset___c* New_ctor();

  /// @brief Method .ctor, addr 0x3b16ab0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_localizedText>b__6_0, addr 0x3b16ab8, size 0x20, virtual false, abstract: false, final false
  inline bool _get_localizedText_b__6_0(::GlobalNamespace::LocalizedTextAsset_TextInfo* t);

  static inline ::GlobalNamespace::LocalizedTextAsset___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::LocalizedTextAsset_TextInfo*, bool>* getStaticF___9__6_0();

  static inline void setStaticF___9(::GlobalNamespace::LocalizedTextAsset___c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::LocalizedTextAsset_TextInfo*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextAsset___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextAsset___c(LocalizedTextAsset___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextAsset___c(LocalizedTextAsset___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5071 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedTextAsset___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.Polyglot.Language, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedTextAsset/<>c__DisplayClass6_0
class CORDL_TYPE LocalizedTextAsset___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language)) ::BGLib::Polyglot::Language language;

  static inline ::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0* New_ctor();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_language() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_language();

  constexpr void __cordl_internal_set_language(::BGLib::Polyglot::Language value);

  /// @brief Method .ctor, addr 0x3b16a3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_localizedText>b__1, addr 0x3b16ad8, size 0x24, virtual false, abstract: false, final false
  inline bool _get_localizedText_b__1(::GlobalNamespace::LocalizedTextAsset_TextInfo* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextAsset___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextAsset___c__DisplayClass6_0(LocalizedTextAsset___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextAsset___c__DisplayClass6_0(LocalizedTextAsset___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5072 };

  /// @brief Field language, offset: 0x10, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___language;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0, ___language) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedTextAsset
class CORDL_TYPE LocalizedTextAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using TextInfo = ::GlobalNamespace::LocalizedTextAsset_TextInfo;

  using __c = ::GlobalNamespace::LocalizedTextAsset___c;

  using __c__DisplayClass6_0 = ::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0;

  /// @brief Field _lastTextInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lastTextInfo, put = __cordl_internal_set__lastTextInfo)) ::GlobalNamespace::LocalizedTextAsset_TextInfo* _lastTextInfo;

  /// @brief Field _textInfos, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__textInfos,
                      put = __cordl_internal_set__textInfos)) ::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*, ::Array<::GlobalNamespace::LocalizedTextAsset_TextInfo*>*>
      _textInfos;

  __declspec(property(get = get_localizedText)) ::StringW localizedText;

  __declspec(property(get = get_textInfos)) ::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*, ::Array<::GlobalNamespace::LocalizedTextAsset_TextInfo*>*> textInfos;

  static inline ::GlobalNamespace::LocalizedTextAsset* New_ctor();

  constexpr ::GlobalNamespace::LocalizedTextAsset_TextInfo* const& __cordl_internal_get__lastTextInfo() const;

  constexpr ::GlobalNamespace::LocalizedTextAsset_TextInfo*& __cordl_internal_get__lastTextInfo();

  constexpr ::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*, ::Array<::GlobalNamespace::LocalizedTextAsset_TextInfo*>*> const& __cordl_internal_get__textInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*, ::Array<::GlobalNamespace::LocalizedTextAsset_TextInfo*>*>& __cordl_internal_get__textInfos();

  constexpr void __cordl_internal_set__lastTextInfo(::GlobalNamespace::LocalizedTextAsset_TextInfo* value);

  constexpr void __cordl_internal_set__textInfos(::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*, ::Array<::GlobalNamespace::LocalizedTextAsset_TextInfo*>*> value);

  /// @brief Method .ctor, addr 0x3b16a44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localizedText, addr 0x3b16738, size 0x304, virtual false, abstract: false, final false
  inline ::StringW get_localizedText();

  /// @brief Method get_textInfos, addr 0x3b16730, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*, ::Array<::GlobalNamespace::LocalizedTextAsset_TextInfo*>*> get_textInfos();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextAsset(LocalizedTextAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextAsset(LocalizedTextAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5073 };

  /// @brief Field _textInfos, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*, ::Array<::GlobalNamespace::LocalizedTextAsset_TextInfo*>*> ____textInfos;

  /// @brief Field _lastTextInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalizedTextAsset_TextInfo* ____lastTextInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedTextAsset, ____textInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedTextAsset, ____lastTextInfo) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedTextAsset, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizedTextAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedTextAsset*, "", "LocalizedTextAsset");
NEED_NO_BOX(::GlobalNamespace::LocalizedTextAsset_TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedTextAsset_TextInfo*, "", "LocalizedTextAsset/TextInfo");
NEED_NO_BOX(::GlobalNamespace::LocalizedTextAsset___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedTextAsset___c*, "", "LocalizedTextAsset/<>c");
NEED_NO_BOX(::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0*, "", "LocalizedTextAsset/<>c__DisplayClass6_0");
