#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextAsset)
namespace UnityEngine {
class __TextAsset__EncodingUtility;
}
namespace System::Text {
class Encoding;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
// Forward declare root types
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class __TextAsset__EncodingUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextAsset);
MARK_REF_PTR_T(::UnityEngine::__TextAsset__EncodingUtility);
// Type: ::EncodingUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10134))
// CS Name: ::TextAsset::EncodingUtility*
class CORDL_TYPE __TextAsset__EncodingUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field encodingLookup, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_encodingLookup,
               put = setStaticF_encodingLookup))::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                                                         ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*> encodingLookup;

  /// @brief Field targetEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_targetEncoding, put = setStaticF_targetEncoding))::System::Text::Encoding* targetEncoding;

  static inline void setStaticF_encodingLookup(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                                                        ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>
                                                   value);

  static inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                         ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>
  getStaticF_encodingLookup();

  static inline void setStaticF_targetEncoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_targetEncoding();

  // Ctor Parameters [CppParam { name: "", ty: "__TextAsset__EncodingUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextAsset__EncodingUtility(__TextAsset__EncodingUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextAsset__EncodingUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextAsset__EncodingUtility(__TextAsset__EncodingUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextAsset__EncodingUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TextAsset__EncodingUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::TextAsset
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10135))
// CS Name: ::UnityEngine::TextAsset*
class CORDL_TYPE TextAsset : public ::UnityEngine::Object {
public:
  // Declarations
  using EncodingUtility = ::UnityEngine::__TextAsset__EncodingUtility;

  __declspec(property(get = get_bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  __declspec(property(get = get_text))::StringW text;

  /// @brief Method get_bytes addr 0x2b6a950 size 0x3c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_bytes();

  /// @brief Method get_text addr 0x2b6a98c size 0x40 virtual false final false
  inline ::StringW get_text();

  /// @brief Method ToString addr 0x2b6ac50 size 0x4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method DecodeString addr 0x2b6a9cc size 0x284 virtual false final false
  static inline ::StringW DecodeString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  // Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextAsset(TextAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextAsset(TextAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAsset();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAsset, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TextAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAsset*, "UnityEngine", "TextAsset");
NEED_NO_BOX(::UnityEngine::__TextAsset__EncodingUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TextAsset__EncodingUtility*, "UnityEngine", "TextAsset/EncodingUtility");
