#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerTexture)
namespace System {
struct IntPtr;
}
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
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Networking.DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerTexture
class CORDL_TYPE DownloadHandlerTexture : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  /// @brief Field mNonReadable, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_mNonReadable, put = __cordl_internal_set_mNonReadable)) bool mNonReadable;

  /// @brief Field m_NativeData, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_NativeData, put = __cordl_internal_set_m_NativeData)) ::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;

  __declspec(property(get = get_texture)) ::UnityW<::UnityEngine::Texture2D> texture;

  /// @brief Method Create, addr 0x4ae4f88, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerTexture* obj, bool readable);

  /// @brief Method Dispose, addr 0x4ae5084, size 0x24, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetContent, addr 0x4ae5120, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> GetContent(::UnityEngine::Networking::UnityWebRequest* www);

  /// @brief Method GetNativeData, addr 0x4ae5078, size 0xc, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method InternalCreateTexture, addr 0x4ae4fcc, size 0x4c, virtual false, abstract: false, final false
  inline void InternalCreateTexture(bool readable);

  /// @brief Method InternalGetTextureNative, addr 0x4ae50e4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> InternalGetTextureNative();

  static inline ::UnityEngine::Networking::DownloadHandlerTexture* New_ctor(bool readable);

  constexpr bool const& __cordl_internal_get_mNonReadable() const;

  constexpr bool& __cordl_internal_get_mNonReadable();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_NativeData() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_NativeData();

  constexpr void __cordl_internal_set_mNonReadable(bool value);

  constexpr void __cordl_internal_set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method .ctor, addr 0x4ae5018, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(bool readable);

  /// @brief Method get_texture, addr 0x4ae50a8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_texture();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerTexture(DownloadHandlerTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerTexture(DownloadHandlerTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19041 };

  /// @brief Field m_NativeData, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___m_NativeData;

  /// @brief Field mNonReadable, offset: 0x28, size: 0x1, def value: None
  bool ___mNonReadable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerTexture, ___m_NativeData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerTexture, ___mNonReadable) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerTexture, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerTexture*, "UnityEngine.Networking", "DownloadHandlerTexture");
