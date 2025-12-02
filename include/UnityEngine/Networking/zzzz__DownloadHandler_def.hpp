#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandler)
namespace System::Text {
class Encoding;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Networking {
class DownloadHandler_BindingsMarshaller;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandler;
}
namespace UnityEngine::Networking {
class DownloadHandler_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandler);
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandler_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandler/BindingsMarshaller
class CORDL_TYPE DownloadHandler_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6bf4884, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Networking::DownloadHandler* handler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandler_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandler_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandler_BindingsMarshaller(DownloadHandler_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandler_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandler_BindingsMarshaller(DownloadHandler_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21977 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandler_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandler
class CORDL_TYPE DownloadHandler : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Networking::DownloadHandler_BindingsMarshaller;

  __declspec(property(get = get_data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  __declspec(property(get = get_error)) ::StringW error;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(get = get_nativeData)) ::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> nativeData;

  __declspec(property(get = get_text)) ::StringW text;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CompleteContent, addr 0x6bf461c, size 0x4, virtual true, abstract: false, final false
  inline void CompleteContent();

  /// @brief Method CreateNativeArrayForNativeData, addr 0x6bf4828, size 0x5c, virtual false, abstract: false, final false
  static inline void CreateNativeArrayForNativeData(::ByRef<::Unity::Collections::NativeArray_1<uint8_t>> data, uint8_t* bytes, int32_t length);

  /// @brief Method Dispose, addr 0x6bf3efc, size 0x20, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method DisposeNativeArray, addr 0x6bf47dc, size 0x4c, virtual false, abstract: false, final false
  static inline void DisposeNativeArray(::ByRef<::Unity::Collections::NativeArray_1<uint8_t>> data);

  /// @brief Method Finalize, addr 0x6bf3eb0, size 0x4c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetCheckedDownloader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetCheckedDownloader(::UnityEngine::Networking::UnityWebRequest* www);

  /// @brief Method GetContentType, addr 0x6bf44c0, size 0x100, virtual false, abstract: false, final false
  inline ::StringW GetContentType();

  /// @brief Method GetContentType_Injected, addr 0x6bf45c0, size 0x44, virtual false, abstract: false, final false
  static inline void GetContentType_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetData, addr 0x6bf4104, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetData();

  /// @brief Method GetErrorMsg, addr 0x6bf3f20, size 0x100, virtual false, abstract: false, final false
  inline ::StringW GetErrorMsg();

  /// @brief Method GetErrorMsg_Injected, addr 0x6bf4020, size 0x44, virtual false, abstract: false, final false
  static inline void GetErrorMsg_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetNativeData, addr 0x6bf40f8, size 0xc, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method GetProgress, addr 0x6bf4620, size 0x8, virtual true, abstract: false, final false
  inline float_t GetProgress();

  /// @brief Method GetText, addr 0x6bf4194, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW GetText();

  /// @brief Method GetTextEncoder, addr 0x6bf424c, size 0x274, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* GetTextEncoder();

  /// @brief Method InternalGetByteArray, addr 0x6bf4108, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* dh);

  /// @brief Method InternalGetByteArray, addr 0x6bf4628, size 0x50, virtual false, abstract: false, final false
  static inline uint8_t* InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* dh, ::ByRef<int32_t> length);

  /// @brief Method InternalGetByteArray_Injected, addr 0x6bf4678, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t* InternalGetByteArray_Injected(::System::IntPtr dh, ::ByRef<int32_t> length);

  /// @brief Method InternalGetNativeArray, addr 0x6bf46bc, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> InternalGetNativeArray(::UnityEngine::Networking::DownloadHandler* dh, ::ByRef<::Unity::Collections::NativeArray_1<uint8_t>> nativeArray);

  static inline ::UnityEngine::Networking::DownloadHandler* New_ctor();

  /// @brief Method ReceiveContentLength, addr 0x6bf4618, size 0x4, virtual true, abstract: false, final false
  inline void ReceiveContentLength(int32_t contentLength);

  /// @brief Method ReceiveContentLengthHeader, addr 0x6bf460c, size 0xc, virtual true, abstract: false, final false
  inline void ReceiveContentLengthHeader(uint64_t contentLength);

  /// @brief Method ReceiveData, addr 0x6bf4604, size 0x8, virtual true, abstract: false, final false
  inline bool ReceiveData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t dataLength);

  /// @brief Method ReleaseFromScripting, addr 0x6bf3e20, size 0x50, virtual false, abstract: false, final false
  inline void ReleaseFromScripting();

  /// @brief Method ReleaseFromScripting_Injected, addr 0x6bf3e70, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseFromScripting_Injected(::System::IntPtr _unity_self);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6bf3eac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_data, addr 0x6bf40e0, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_data();

  /// @brief Method get_error, addr 0x6bf3f1c, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_error();

  /// @brief Method get_nativeData, addr 0x6bf4064, size 0x7c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> get_nativeData();

  /// @brief Method get_text, addr 0x6bf40ec, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21978 };

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
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandler_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandler_BindingsMarshaller*, "UnityEngine.Networking", "DownloadHandler/BindingsMarshaller");
