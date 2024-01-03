#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerAudioClip)
namespace UnityEngine {
struct AudioType;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerAudioClip;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerAudioClip);
// Type: UnityEngine.Networking::DownloadHandlerAudioClip
// SizeInfo { instance_size: 40, native_size: 24, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 741 }), TypeDefinitionIndex(TypeDefinitionIndex(9999)),
// TypeDefinitionIndex(TypeDefinitionIndex(15580))} Self: TypeDefinitionIndex(TypeDefinitionIndex(16162)) CS Name: ::UnityEngine.Networking::DownloadHandlerAudioClip*
class CORDL_TYPE DownloadHandlerAudioClip : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  /// @brief Field m_NativeData, offset 0x18, size 0x10
  __declspec(property(get = __get_m_NativeData, put = __set_m_NativeData))::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;

  __declspec(property(get = get_audioClip))::UnityEngine::AudioClip* audioClip;

  __declspec(property(put = set_streamAudio)) bool streamAudio;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_m_NativeData();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_m_NativeData() const;

  constexpr void __set_m_NativeData(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method Create, addr 0x2eac068, size 0x54, virtual false, abstract: false, final false
  static inline void* Create(::UnityEngine::Networking::DownloadHandlerAudioClip* obj, ::StringW url, ::UnityEngine::AudioType audioType);

  /// @brief Method InternalCreateAudioClip, addr 0x2eac0bc, size 0x5c, virtual false, abstract: false, final false
  inline void InternalCreateAudioClip(::StringW url, ::UnityEngine::AudioType audioType);

  static inline ::UnityEngine::Networking::DownloadHandlerAudioClip* New_ctor(::StringW url, ::UnityEngine::AudioType audioType);

  /// @brief Method .ctor, addr 0x2eac004, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::UnityEngine::AudioType audioType);

  /// @brief Method GetNativeData, addr 0x2eac118, size 0xc, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method Dispose, addr 0x2eac124, size 0x24, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetText, addr 0x2eac148, size 0x50, virtual true, abstract: false, final false
  inline ::StringW GetText();

  /// @brief Method get_audioClip, addr 0x2eac198, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioClip* get_audioClip();

  /// @brief Method set_streamAudio, addr 0x2eac1d4, size 0x44, virtual false, abstract: false, final false
  inline void set_streamAudio(bool value);

  /// @brief Method GetContent, addr 0x2eac218, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioClip* GetContent(::UnityEngine::Networking::UnityWebRequest* www);

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerAudioClip(DownloadHandlerAudioClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerAudioClip(DownloadHandlerAudioClip const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerAudioClip();

public:
  /// @brief Field m_NativeData, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___m_NativeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerAudioClip, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::DownloadHandlerAudioClip, ___m_NativeData) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerAudioClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerAudioClip*, "UnityEngine.Networking", "DownloadHandlerAudioClip");
