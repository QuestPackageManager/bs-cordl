#pragma once
// IWYU pragma private; include "UnityEngine/TextAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAsset)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct TextAsset_CreateOptions;
}
namespace UnityEngine {
class TextAsset_EncodingUtility;
}
// Forward declare root types
namespace UnityEngine {
struct TextAsset_CreateOptions;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class TextAsset_EncodingUtility;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextAsset_CreateOptions);
MARK_REF_PTR_T(::UnityEngine::TextAsset);
MARK_REF_PTR_T(::UnityEngine::TextAsset_EncodingUtility);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextAsset/CreateOptions
struct CORDL_TYPE TextAsset_CreateOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextAsset_CreateOptions_Unwrapped
  enum struct __TextAsset_CreateOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_CreateNativeObject = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextAsset_CreateOptions_Unwrapped() const noexcept {
    return static_cast<__TextAsset_CreateOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAsset_CreateOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextAsset_CreateOptions(int32_t value__) noexcept;

  /// @brief Field CreateNativeObject value: I32(1)
  static ::UnityEngine::TextAsset_CreateOptions const CreateNativeObject;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::TextAsset_CreateOptions const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10909 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextAsset_CreateOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAsset_CreateOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextAsset/EncodingUtility
class CORDL_TYPE TextAsset_EncodingUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field encodingLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encodingLookup,
                      put = setStaticF_encodingLookup)) ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                                                                 ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>
      encodingLookup;

  /// @brief Field targetEncoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_targetEncoding, put = setStaticF_targetEncoding)) ::System::Text::Encoding* targetEncoding;

  static inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                         ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>
  getStaticF_encodingLookup();

  static inline ::System::Text::Encoding* getStaticF_targetEncoding();

  static inline void setStaticF_encodingLookup(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>,
                                                        ::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Text::Encoding*>>*>
                                                   value);

  static inline void setStaticF_targetEncoding(::System::Text::Encoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAsset_EncodingUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextAsset_EncodingUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextAsset_EncodingUtility(TextAsset_EncodingUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextAsset_EncodingUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextAsset_EncodingUtility(TextAsset_EncodingUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10910 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAsset_EncodingUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextAsset
class CORDL_TYPE TextAsset : public ::UnityEngine::Object {
public:
  // Declarations
  using CreateOptions = ::UnityEngine::TextAsset_CreateOptions;

  using EncodingUtility = ::UnityEngine::TextAsset_EncodingUtility;

  __declspec(property(get = get_bytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  __declspec(property(get = get_dataSize)) int64_t dataSize;

  __declspec(property(get = get_text)) ::StringW text;

  /// @brief Method DecodeString, addr 0x48b3184, size 0x288, virtual false, abstract: false, final false
  static inline ::StringW DecodeString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method GetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetData();

  /// @brief Method GetDataPtr, addr 0x48b307c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::IntPtr GetDataPtr();

  /// @brief Method GetDataSize, addr 0x48b30b8, size 0x3c, virtual false, abstract: false, final false
  inline int64_t GetDataSize();

  /// @brief Method GetPreview, addr 0x48b3510, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetPreview(int32_t maxChars);

  /// @brief Method GetPreviewBytes, addr 0x48b2ff4, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreviewBytes(int32_t maxByteCount);

  /// @brief Method Internal_CreateInstance, addr 0x48b3038, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateInstance(::UnityEngine::TextAsset* self, ::StringW text);

  static inline ::UnityEngine::TextAsset* New_ctor();

  static inline ::UnityEngine::TextAsset* New_ctor(::UnityEngine::TextAsset_CreateOptions options, ::StringW text);

  static inline ::UnityEngine::TextAsset* New_ctor(::StringW text);

  /// @brief Method ToString, addr 0x48b3448, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x48b344c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x48b3458, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextAsset_CreateOptions options, ::StringW text);

  /// @brief Method .ctor, addr 0x48b3504, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  /// @brief Method get_bytes, addr 0x48b2fb8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_bytes();

  /// @brief Method get_dataSize, addr 0x48b340c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_dataSize();

  /// @brief Method get_text, addr 0x48b30f4, size 0x90, virtual false, abstract: false, final false
  inline ::StringW get_text();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextAsset(TextAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextAsset(TextAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10911 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAsset, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAsset_CreateOptions, "UnityEngine", "TextAsset/CreateOptions");
NEED_NO_BOX(::UnityEngine::TextAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAsset*, "UnityEngine", "TextAsset");
NEED_NO_BOX(::UnityEngine::TextAsset_EncodingUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAsset_EncodingUtility*, "UnityEngine", "TextAsset/EncodingUtility");
