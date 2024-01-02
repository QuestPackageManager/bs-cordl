#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Polyglot/zzzz__Language_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextAsset)
namespace GlobalNamespace {
class __LocalizedTextAsset____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __LocalizedTextAsset____c;
}
namespace GlobalNamespace {
class __LocalizedTextAsset__TextInfo;
}
namespace UnityEngine {
class TextAsset;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace GlobalNamespace {
class __LocalizedTextAsset__TextInfo;
}
namespace GlobalNamespace {
class __LocalizedTextAsset____c;
}
namespace GlobalNamespace {
class __LocalizedTextAsset____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizedTextAsset);
MARK_REF_PTR_T(::GlobalNamespace::__LocalizedTextAsset__TextInfo);
MARK_REF_PTR_T(::GlobalNamespace::__LocalizedTextAsset____c);
MARK_REF_PTR_T(::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0);
// Type: ::TextInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5872))
// CS Name: ::LocalizedTextAsset::TextInfo*
class CORDL_TYPE __LocalizedTextAsset__TextInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x4
  __declspec(property(get = __get_language, put = __set_language))::Polyglot::Language language;

  /// @brief Field localizedText, offset 0x18, size 0x8
  __declspec(property(get = __get_localizedText, put = __set_localizedText))::UnityEngine::TextAsset* localizedText;

  constexpr ::Polyglot::Language& __get_language();

  constexpr ::Polyglot::Language const& __get_language() const;

  constexpr void __set_language(::Polyglot::Language value);

  constexpr ::UnityEngine::TextAsset*& __get_localizedText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get_localizedText() const;

  constexpr void __set_localizedText(::UnityEngine::TextAsset* value);

  static inline ::GlobalNamespace::__LocalizedTextAsset__TextInfo* New_ctor();

  /// @brief Method .ctor, addr 0x22f8944, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset__TextInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalizedTextAsset__TextInfo(__LocalizedTextAsset__TextInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset__TextInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalizedTextAsset__TextInfo(__LocalizedTextAsset__TextInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalizedTextAsset__TextInfo();

public:
  /// @brief Field language, offset: 0x10, size: 0x4, def value: None
  ::Polyglot::Language ___language;

  /// @brief Field localizedText, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ___localizedText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalizedTextAsset__TextInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalizedTextAsset__TextInfo, ___language) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalizedTextAsset__TextInfo, ___localizedText) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15554)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5873))
// CS Name: ::LocalizedTextAsset::<>c__DisplayClass6_0*
class CORDL_TYPE __LocalizedTextAsset____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x4
  __declspec(property(get = __get_language, put = __set_language))::Polyglot::Language language;

  constexpr ::Polyglot::Language& __get_language();

  constexpr ::Polyglot::Language const& __get_language() const;

  constexpr void __set_language(::Polyglot::Language value);

  static inline ::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor, addr 0x22f8934, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_localizedText>b__1, addr 0x22f894c, size 0x24, virtual false, abstract: false, final false
  inline bool _get_localizedText_b__1(::GlobalNamespace::__LocalizedTextAsset__TextInfo* t);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalizedTextAsset____c__DisplayClass6_0(__LocalizedTextAsset____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalizedTextAsset____c__DisplayClass6_0(__LocalizedTextAsset____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalizedTextAsset____c__DisplayClass6_0();

public:
  /// @brief Field language, offset: 0x10, size: 0x4, def value: None
  ::Polyglot::Language ___language;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0, ___language) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5874))
// CS Name: ::LocalizedTextAsset::<>c*
class CORDL_TYPE __LocalizedTextAsset____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LocalizedTextAsset____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, bool>* __9__6_0;

  static inline void setStaticF___9(::GlobalNamespace::__LocalizedTextAsset____c* value);

  static inline ::GlobalNamespace::__LocalizedTextAsset____c* getStaticF___9();

  static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, bool>* getStaticF___9__6_0();

  static inline ::GlobalNamespace::__LocalizedTextAsset____c* New_ctor();

  /// @brief Method .ctor, addr 0x22f89d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_localizedText>b__6_0, addr 0x22f89dc, size 0x20, virtual false, abstract: false, final false
  inline bool _get_localizedText_b__6_0(::GlobalNamespace::__LocalizedTextAsset__TextInfo* t);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalizedTextAsset____c(__LocalizedTextAsset____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalizedTextAsset____c(__LocalizedTextAsset____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalizedTextAsset____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalizedTextAsset____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalizedTextAsset
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5875))
// CS Name: ::LocalizedTextAsset*
class CORDL_TYPE LocalizedTextAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using __c = ::GlobalNamespace::__LocalizedTextAsset____c;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0;

  using TextInfo = ::GlobalNamespace::__LocalizedTextAsset__TextInfo;

  /// @brief Field _textInfos, offset 0x18, size 0x8
  __declspec(property(get = __get__textInfos,
                      put = __set__textInfos))::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, ::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*> _textInfos;

  /// @brief Field _lastTextInfo, offset 0x20, size 0x8
  __declspec(property(get = __get__lastTextInfo, put = __set__lastTextInfo))::GlobalNamespace::__LocalizedTextAsset__TextInfo* _lastTextInfo;

  __declspec(property(get = get_textInfos))::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, ::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*> textInfos;

  __declspec(property(get = get_localizedText))::StringW localizedText;

  constexpr ::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, ::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*>& __get__textInfos();

  constexpr ::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, ::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*> const& __get__textInfos() const;

  constexpr void __set__textInfos(::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, ::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*> value);

  constexpr ::GlobalNamespace::__LocalizedTextAsset__TextInfo*& __get__lastTextInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalizedTextAsset__TextInfo*> const& __get__lastTextInfo() const;

  constexpr void __set__lastTextInfo(::GlobalNamespace::__LocalizedTextAsset__TextInfo* value);

  /// @brief Method get_textInfos, addr 0x22f8620, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, ::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*> get_textInfos();

  /// @brief Method get_localizedText, addr 0x22f8628, size 0x30c, virtual false, abstract: false, final false
  inline ::StringW get_localizedText();

  static inline ::GlobalNamespace::LocalizedTextAsset* New_ctor();

  /// @brief Method .ctor, addr 0x22f893c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextAsset(LocalizedTextAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextAsset(LocalizedTextAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextAsset();

public:
  /// @brief Field _textInfos, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*, ::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*> ____textInfos;

  /// @brief Field _lastTextInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__LocalizedTextAsset__TextInfo* ____lastTextInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedTextAsset, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedTextAsset, ____textInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedTextAsset, ____lastTextInfo) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizedTextAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedTextAsset*, "", "LocalizedTextAsset");
NEED_NO_BOX(::GlobalNamespace::__LocalizedTextAsset__TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalizedTextAsset__TextInfo*, "", "LocalizedTextAsset/TextInfo");
NEED_NO_BOX(::GlobalNamespace::__LocalizedTextAsset____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalizedTextAsset____c*, "", "LocalizedTextAsset/<>c");
NEED_NO_BOX(::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0*, "", "LocalizedTextAsset/<>c__DisplayClass6_0");
