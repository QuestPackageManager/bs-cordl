#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerAudioClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerAudioClip)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Networking {
class DownloadHandlerAudioClip_BindingsMarshaller;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct AudioType;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerAudioClip;
}
namespace UnityEngine::Networking {
class DownloadHandlerAudioClip_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerAudioClip);
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerAudioClip/BindingsMarshaller
class CORDL_TYPE DownloadHandlerAudioClip_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6bf2874, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Networking::DownloadHandlerAudioClip* handler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerAudioClip_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerAudioClip_BindingsMarshaller(DownloadHandlerAudioClip_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerAudioClip_BindingsMarshaller(DownloadHandlerAudioClip_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22937 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Networking.DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerAudioClip
class CORDL_TYPE DownloadHandlerAudioClip : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller;

  __declspec(property(get = get_audioClip)) ::UnityW<::UnityEngine::AudioClip> audioClip;

  /// @brief Field m_NativeData, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_NativeData, put = __cordl_internal_set_m_NativeData)) ::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;

  __declspec(property(put = set_streamAudio)) bool streamAudio;

  /// @brief Method Create, addr 0x6bf2388, size 0x144, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerAudioClip* obj, ::StringW url, ::UnityEngine::AudioType audioType);

  /// @brief Method Create_Injected, addr 0x6bf24cc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::UnityEngine::Networking::DownloadHandlerAudioClip* obj, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> url,
                                                 ::UnityEngine::AudioType audioType);

  /// @brief Method Dispose, addr 0x6bf255c, size 0x60, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetContent, addr 0x6bf281c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> GetContent(::UnityEngine::Networking::UnityWebRequest* www);

  /// @brief Method GetNativeData, addr 0x6bf2550, size 0xc, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method GetText, addr 0x6bf25bc, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW GetText();

  /// @brief Method InternalCreateAudioClip, addr 0x6bf2520, size 0x18, virtual false, abstract: false, final false
  inline void InternalCreateAudioClip(::StringW url, ::UnityEngine::AudioType audioType);

  static inline ::UnityEngine::Networking::DownloadHandlerAudioClip* New_ctor(::StringW url, ::UnityEngine::AudioType audioType);

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_NativeData() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_NativeData();

  constexpr void __cordl_internal_set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method .ctor, addr 0x6bf2538, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::UnityEngine::AudioType audioType);

  /// @brief Method get_audioClip, addr 0x6bf2608, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClip();

  /// @brief Method get_audioClip_Injected, addr 0x6bf2744, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_audioClip_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_streamAudio, addr 0x6bf2780, size 0x58, virtual false, abstract: false, final false
  inline void set_streamAudio(bool value);

  /// @brief Method set_streamAudio_Injected, addr 0x6bf27d8, size 0x44, virtual false, abstract: false, final false
  static inline void set_streamAudio_Injected(::System::IntPtr _unity_self, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerAudioClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerAudioClip(DownloadHandlerAudioClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerAudioClip(DownloadHandlerAudioClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22938 };

  /// @brief Field m_NativeData, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___m_NativeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerAudioClip, ___m_NativeData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerAudioClip, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerAudioClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerAudioClip*, "UnityEngine.Networking", "DownloadHandlerAudioClip");
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerAudioClip_BindingsMarshaller*, "UnityEngine.Networking", "DownloadHandlerAudioClip/BindingsMarshaller");
