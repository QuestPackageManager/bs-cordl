#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandler)
namespace System::Text {
class Encoding;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandler);
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandler
class CORDL_TYPE DownloadHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  __declspec(property(get = get_error)) ::StringW error;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(get = get_nativeData)) ::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> nativeData;

  __declspec(property(get = get_text)) ::StringW text;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CompleteContent, addr 0x4ae5d50, size 0x4, virtual true, abstract: false, final false
  inline void CompleteContent();

  /// @brief Method CreateNativeArrayForNativeData, addr 0x4ae5ebc, size 0x68, virtual false, abstract: false, final false
  static inline void CreateNativeArrayForNativeData(::ByRef<::Unity::Collections::NativeArray_1<uint8_t>> data, ::cordl_internals::Ptr<uint8_t> bytes, int32_t length);

  /// @brief Method Dispose, addr 0x4ae57e0, size 0x58, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method DisposeNativeArray, addr 0x4ae5e78, size 0x44, virtual false, abstract: false, final false
  static inline void DisposeNativeArray(::ByRef<::Unity::Collections::NativeArray_1<uint8_t>> data);

  /// @brief Method Finalize, addr 0x4ae5744, size 0x9c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetCheckedDownloader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetCheckedDownloader(::UnityEngine::Networking::UnityWebRequest* www);

  /// @brief Method GetContentType, addr 0x4ae5cfc, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetContentType();

  /// @brief Method GetData, addr 0x4ae5944, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetData();

  /// @brief Method GetErrorMsg, addr 0x4ae5874, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetErrorMsg();

  /// @brief Method GetNativeData, addr 0x4ae5938, size 0xc, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method GetProgress, addr 0x4ae5d54, size 0x8, virtual true, abstract: false, final false
  inline float_t GetProgress();

  /// @brief Method GetText, addr 0x4ae59cc, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW GetText();

  /// @brief Method GetTextEncoder, addr 0x4ae5a8c, size 0x270, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* GetTextEncoder();

  /// @brief Method InternalGetByteArray, addr 0x4ae5948, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* dh);

  /// @brief Method InternalGetByteArray, addr 0x4ae5d5c, size 0x44, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* dh, ::ByRef<int32_t> length);

  /// @brief Method InternalGetNativeArray, addr 0x4ae5da0, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> InternalGetNativeArray(::UnityEngine::Networking::DownloadHandler* dh, ::ByRef<::Unity::Collections::NativeArray_1<uint8_t>> nativeArray);

  static inline ::UnityEngine::Networking::DownloadHandler* New_ctor();

  /// @brief Method ReceiveContentLength, addr 0x4ae5d4c, size 0x4, virtual true, abstract: false, final false
  inline void ReceiveContentLength(int32_t contentLength);

  /// @brief Method ReceiveContentLengthHeader, addr 0x4ae5d40, size 0xc, virtual true, abstract: false, final false
  inline void ReceiveContentLengthHeader(uint64_t contentLength);

  /// @brief Method ReceiveData, addr 0x4ae5d38, size 0x8, virtual true, abstract: false, final false
  inline bool ReceiveData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t dataLength);

  /// @brief Method Release, addr 0x4ae5700, size 0x3c, virtual false, abstract: false, final false
  inline void Release();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x4ae573c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_data, addr 0x4ae5920, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_data();

  /// @brief Method get_error, addr 0x4ae5838, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_error();

  /// @brief Method get_nativeData, addr 0x4ae58b0, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> get_nativeData();

  /// @brief Method get_text, addr 0x4ae592c, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandler(DownloadHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandler(DownloadHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18244 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::DownloadHandler, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandler, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandler*, "UnityEngine.Networking", "DownloadHandler");
