#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAssetPacks)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Android {
class AndroidAssetPackInfo;
}
namespace UnityEngine::Android {
class AndroidAssetPackState;
}
namespace UnityEngine::Android {
class AndroidAssetPackUseMobileDataRequestResult;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerStatusQueryCallback;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPacks;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerStatusQueryCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPacks);
MARK_REF_PTR_T(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback);
MARK_REF_PTR_T(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback);
MARK_REF_PTR_T(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback);
// Type: ::AssetPackManagerDownloadStatusCallback
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Android {
// Is value type: false
// CS Name: ::AndroidAssetPacks::AssetPackManagerDownloadStatusCallback*
class CORDL_TYPE __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field m_AssetPacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetPacks, put = __cordl_internal_set_m_AssetPacks))::ArrayW<::StringW, ::Array<::StringW>*> m_AssetPacks;

  /// @brief Field m_Callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback))::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* m_Callback;

  static inline ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback* New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* callback,
                                                                                                              ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_AssetPacks() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_AssetPacks();

  constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*& __cordl_internal_get_m_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*> const& __cordl_internal_get_m_Callback() const;

  constexpr void __cordl_internal_set_m_AssetPacks(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_Callback(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* value);

  /// @brief Method .ctor, addr 0x33f9fbc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* callback, ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks);

  /// @brief Method onStatusUpdate, addr 0x33fa040, size 0x114, virtual false, abstract: false, final false
  inline void onStatusUpdate(::StringW assetPackName, int32_t assetPackStatus, int64_t assetPackSize, int64_t assetPackBytesDownloaded, int32_t assetPackTransferProgress, int32_t assetPackErrorCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback(__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback(__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback const&) = delete;

  /// @brief Field m_Callback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* ___m_Callback;

  /// @brief Field m_AssetPacks, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_AssetPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback, ___m_Callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback, ___m_AssetPacks) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Android
// Type: ::AssetPackManagerMobileDataConfirmationCallback
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Android {
// Is value type: false
// CS Name: ::AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback*
class CORDL_TYPE __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field m_Callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback))::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* m_Callback;

  static inline ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback*
  New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* callback);

  constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*& __cordl_internal_get_m_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*> const& __cordl_internal_get_m_Callback() const;

  constexpr void __cordl_internal_set_m_Callback(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* value);

  /// @brief Method .ctor, addr 0x33fa154, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* callback);

  /// @brief Method onMobileDataConfirmationResult, addr 0x33fa1d4, size 0x8c, virtual false, abstract: false, final false
  inline void onMobileDataConfirmationResult(bool allowed);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback(__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback(__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback const&) = delete;

  /// @brief Field m_Callback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* ___m_Callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback, ___m_Callback) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Android
// Type: ::AssetPackManagerStatusQueryCallback
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Android {
// Is value type: false
// CS Name: ::AndroidAssetPacks::AssetPackManagerStatusQueryCallback*
class CORDL_TYPE __AndroidAssetPacks__AssetPackManagerStatusQueryCallback : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field m_AssetPackNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetPackNames, put = __cordl_internal_set_m_AssetPackNames))::System::Collections::Generic::List_1<::StringW>* m_AssetPackNames;

  /// @brief Field m_Callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback))::System::Action_2<
      uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* m_Callback;

  /// @brief Field m_Size, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) int64_t m_Size;

  /// @brief Field m_States, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_States, put = __cordl_internal_set_m_States))::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* m_States;

  static inline ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback*
  New_ctor(::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* callback,
           ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_AssetPackNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_AssetPackNames() const;

  constexpr ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*& __cordl_internal_get_m_Callback();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*> const&
  __cordl_internal_get_m_Callback() const;

  constexpr int64_t const& __cordl_internal_get_m_Size() const;

  constexpr int64_t& __cordl_internal_get_m_Size();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>*& __cordl_internal_get_m_States();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>*> const& __cordl_internal_get_m_States() const;

  constexpr void __cordl_internal_set_m_AssetPackNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void
  __cordl_internal_set_m_Callback(::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* value);

  constexpr void __cordl_internal_set_m_Size(int64_t value);

  constexpr void __cordl_internal_set_m_States(::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* value);

  /// @brief Method .ctor, addr 0x33fa260, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* callback,
                    ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks);

  /// @brief Method onStatusResult, addr 0x33fa358, size 0x37c, virtual false, abstract: false, final false
  inline void onStatusResult(int64_t totalBytes, ::ArrayW<::StringW, ::Array<::StringW>*> assetPackNames, ::ArrayW<int32_t, ::Array<int32_t>*> assetPackStatuses,
                             ::ArrayW<int32_t, ::Array<int32_t>*> assetPackErrorCodes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AndroidAssetPacks__AssetPackManagerStatusQueryCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerStatusQueryCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AndroidAssetPacks__AssetPackManagerStatusQueryCallback(__AndroidAssetPacks__AssetPackManagerStatusQueryCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerStatusQueryCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AndroidAssetPacks__AssetPackManagerStatusQueryCallback(__AndroidAssetPacks__AssetPackManagerStatusQueryCallback const&) = delete;

  /// @brief Field m_Callback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* ___m_Callback;

  /// @brief Field m_AssetPackNames, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_AssetPackNames;

  /// @brief Field m_States, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* ___m_States;

  /// @brief Field m_Size, offset: 0x38, size: 0x8, def value: None
  int64_t ___m_Size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback, ___m_Callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback, ___m_AssetPackNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback, ___m_States) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback, ___m_Size) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Android
// Type: UnityEngine.Android::AndroidAssetPacks
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Android {
// Is value type: false
// CS Name: ::UnityEngine.Android::AndroidAssetPacks*
class CORDL_TYPE AndroidAssetPacks : public ::System::Object {
public:
  // Declarations
  using AssetPackManagerDownloadStatusCallback = ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback;

  using AssetPackManagerMobileDataConfirmationCallback = ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback;

  using AssetPackManagerStatusQueryCallback = ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback;

  /// @brief Field s_ApiMissing, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_ApiMissing, put = setStaticF_s_ApiMissing)) bool s_ApiMissing;

  /// @brief Field s_JavaPlayAssetDeliveryWrapper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_JavaPlayAssetDeliveryWrapper, put = setStaticF_s_JavaPlayAssetDeliveryWrapper))::UnityEngine::AndroidJavaObject* s_JavaPlayAssetDeliveryWrapper;

  /// @brief Method GetAssetPackManager, addr 0x33f9ca4, size 0x318, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* GetAssetPackManager();

  static inline bool getStaticF_s_ApiMissing();

  static inline ::UnityEngine::AndroidJavaObject* getStaticF_s_JavaPlayAssetDeliveryWrapper();

  static inline void setStaticF_s_ApiMissing(bool value);

  static inline void setStaticF_s_JavaPlayAssetDeliveryWrapper(::UnityEngine::AndroidJavaObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAssetPacks(AndroidAssetPacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAssetPacks(AndroidAssetPacks const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPacks, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks*, "UnityEngine.Android", "AndroidAssetPacks");
NEED_NO_BOX(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerDownloadStatusCallback");
NEED_NO_BOX(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback*, "UnityEngine.Android",
                       "AndroidAssetPacks/AssetPackManagerMobileDataConfirmationCallback");
NEED_NO_BOX(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerStatusQueryCallback");
