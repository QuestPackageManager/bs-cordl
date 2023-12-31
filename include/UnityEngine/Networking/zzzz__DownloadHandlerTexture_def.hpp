#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerTexture)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerTexture);
// Type: UnityEngine.Networking::DownloadHandlerTexture
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15580)), TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 741
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(16141)) CS Name: ::UnityEngine.Networking::DownloadHandlerTexture*
class CORDL_TYPE DownloadHandlerTexture : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  /// @brief Field m_NativeData, offset 0x18, size 0x10
  __declspec(property(get = __get_m_NativeData, put = __set_m_NativeData))::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;

  /// @brief Field mTexture, offset 0x28, size 0x8
  __declspec(property(get = __get_mTexture, put = __set_mTexture))::UnityEngine::Texture2D* mTexture;

  /// @brief Field mHasTexture, offset 0x30, size 0x1
  __declspec(property(get = __get_mHasTexture, put = __set_mHasTexture)) bool mHasTexture;

  /// @brief Field mNonReadable, offset 0x31, size 0x1
  __declspec(property(get = __get_mNonReadable, put = __set_mNonReadable)) bool mNonReadable;

  __declspec(property(get = get_texture))::UnityEngine::Texture2D* texture;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_m_NativeData();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_m_NativeData() const;

  constexpr void __set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value);

  constexpr ::UnityEngine::Texture2D*& __get_mTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get_mTexture() const;

  constexpr void __set_mTexture(::UnityEngine::Texture2D* value);

  constexpr bool& __get_mHasTexture();

  constexpr bool const& __get_mHasTexture() const;

  constexpr void __set_mHasTexture(bool value);

  constexpr bool& __get_mNonReadable();

  constexpr bool const& __get_mNonReadable() const;

  constexpr void __set_mNonReadable(bool value);

  /// @brief Method Create, addr 0x2eb0e70, size 0x44, virtual false, abstract: false, final false
  static inline void* Create(::UnityEngine::Networking::DownloadHandlerTexture* obj, bool readable);

  /// @brief Method InternalCreateTexture, addr 0x2eb0eb4, size 0x4c, virtual false, abstract: false, final false
  inline void InternalCreateTexture(bool readable);

  static inline ::UnityEngine::Networking::DownloadHandlerTexture* New_ctor(bool readable);

  /// @brief Method .ctor, addr 0x2eb0e10, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(bool readable);

  /// @brief Method GetNativeData, addr 0x2eb0f00, size 0xc, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method Dispose, addr 0x2eb0f0c, size 0x24, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method get_texture, addr 0x2eb0f30, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* get_texture();

  /// @brief Method InternalGetTexture, addr 0x2eb0f34, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* InternalGetTexture();

  /// @brief Method InternalGetTextureNative, addr 0x2eb1044, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* InternalGetTextureNative();

  /// @brief Method GetContent, addr 0x2eb1080, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Texture2D* GetContent(::UnityEngine::Networking::UnityWebRequest* www);

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerTexture(DownloadHandlerTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerTexture(DownloadHandlerTexture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerTexture();

public:
  /// @brief Field m_NativeData, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___m_NativeData;

  /// @brief Field mTexture, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ___mTexture;

  /// @brief Field mHasTexture, offset: 0x30, size: 0x1, def value: None
  bool ___mHasTexture;

  /// @brief Field mNonReadable, offset: 0x31, size: 0x1, def value: None
  bool ___mNonReadable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerTexture, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerTexture, ___m_NativeData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerTexture, ___mTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerTexture, ___mHasTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerTexture, ___mNonReadable) == 0x31, "Offset mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerTexture*, "UnityEngine.Networking", "DownloadHandlerTexture");
