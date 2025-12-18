#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
class DownloadHandlerTexture_BindingsMarshaller;
}
namespace UnityEngine::Networking {
struct DownloadedTextureParams;
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
namespace UnityEngine::Networking {
class DownloadHandlerTexture_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerTexture);
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerTexture/BindingsMarshaller
class CORDL_TYPE DownloadHandlerTexture_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6c60008, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Networking::DownloadHandlerTexture* handler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerTexture_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerTexture_BindingsMarshaller(DownloadHandlerTexture_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerTexture_BindingsMarshaller(DownloadHandlerTexture_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22969 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Networking.DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerTexture
class CORDL_TYPE DownloadHandlerTexture : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller;

  /// @brief Field m_NativeData, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_NativeData, put = __cordl_internal_set_m_NativeData)) ::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;

  __declspec(property(get = get_texture)) ::UnityW<::UnityEngine::Texture2D> texture;

  /// @brief Method Create, addr 0x6c5fc94, size 0x48, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerTexture* obj, ::UnityEngine::Networking::DownloadedTextureParams parameters);

  /// @brief Method Create_Injected, addr 0x6c5fcdc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::UnityEngine::Networking::DownloadHandlerTexture* obj, ::ByRef<::UnityEngine::Networking::DownloadedTextureParams> parameters);

  /// @brief Method Dispose, addr 0x6c5fdd4, size 0x60, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetContent, addr 0x6c5ffb0, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> GetContent(::UnityEngine::Networking::UnityWebRequest* www);

  /// @brief Method GetNativeData, addr 0x6c5fdc8, size 0xc, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method InternalCreateTexture, addr 0x6c5fd20, size 0x4c, virtual false, abstract: false, final false
  inline void InternalCreateTexture(::UnityEngine::Networking::DownloadedTextureParams parameters);

  /// @brief Method InternalGetTextureNative, addr 0x6c5fe38, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> InternalGetTextureNative();

  /// @brief Method InternalGetTextureNative_Injected, addr 0x6c5ff74, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr InternalGetTextureNative_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::Networking::DownloadHandlerTexture* New_ctor(bool readable);

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_NativeData() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_NativeData();

  constexpr void __cordl_internal_set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method .ctor, addr 0x6c5fd6c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(bool readable);

  /// @brief Method get_texture, addr 0x6c5fe34, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22970 };

  /// @brief Field m_NativeData, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___m_NativeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerTexture, ___m_NativeData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerTexture, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerTexture*, "UnityEngine.Networking", "DownloadHandlerTexture");
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerTexture_BindingsMarshaller*, "UnityEngine.Networking", "DownloadHandlerTexture/BindingsMarshaller");
