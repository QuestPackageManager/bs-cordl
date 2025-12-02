#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAssetPacks)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::Android {
class AndroidAssetPackInfo;
}
namespace UnityEngine::Android {
class AndroidAssetPackState;
}
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
namespace UnityEngine::Android {
class AndroidAssetPackUseMobileDataRequestResult;
}
namespace UnityEngine::Android {
class AndroidAssetPacks_AssetPackManagerDownloadStatusCallback;
}
namespace UnityEngine::Android {
class AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback;
}
namespace UnityEngine::Android {
class AndroidAssetPacks_AssetPackManagerStatusQueryCallback;
}
namespace UnityEngine::Android {
class AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPacks;
}
namespace UnityEngine::Android {
class AndroidAssetPacks_AssetPackManagerDownloadStatusCallback;
}
namespace UnityEngine::Android {
class AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback;
}
namespace UnityEngine::Android {
class AndroidAssetPacks_AssetPackManagerStatusQueryCallback;
}
namespace UnityEngine::Android {
class AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPacks);
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback);
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback);
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback);
MARK_REF_PTR_T(::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c);
// Dependencies System.Object
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidAssetPacks/AssetPackManagerDownloadStatusCallback/<>c
class CORDL_TYPE AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<::StringW, ::StringW>* __9__2_0;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1)) ::System::Func_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* __9__2_1;

  static inline ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c* New_ctor();

  /// @brief Method <.ctor>b__2_0, addr 0x67fb5d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__2_0(::StringW ap);

  /// @brief Method <.ctor>b__2_1, addr 0x67fb5d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidAssetPackStatus __ctor_b__2_1(::StringW ap);

  /// @brief Method .ctor, addr 0x67fb5cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__2_0();

  static inline ::System::Func_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* getStaticF___9__2_1();

  static inline void setStaticF___9(::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::StringW, ::StringW>* value);

  static inline void setStaticF___9__2_1(::System::Func_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c(AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c(AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19913 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Android
// Dependencies UnityEngine.AndroidJavaProxy
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidAssetPacks/AssetPackManagerDownloadStatusCallback
class CORDL_TYPE AndroidAssetPacks_AssetPackManagerDownloadStatusCallback : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  using __c = ::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c;

  /// @brief Field m_AssetPacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetPacks,
                      put = __cordl_internal_set_m_AssetPacks)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* m_AssetPacks;

  /// @brief Field m_Callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback)) ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* m_Callback;

  static inline ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback* New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* callback,
                                                                                                           ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* const& __cordl_internal_get_m_AssetPacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>*& __cordl_internal_get_m_AssetPacks();

  constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* const& __cordl_internal_get_m_Callback() const;

  constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*& __cordl_internal_get_m_Callback();

  constexpr void __cordl_internal_set_m_AssetPacks(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* value);

  constexpr void __cordl_internal_set_m_Callback(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* value);

  /// @brief Method .ctor, addr 0x67fb0d0, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* callback, ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks);

  /// @brief Method onStatusUpdate, addr 0x67fb2c8, size 0x274, virtual false, abstract: false, final false
  inline void onStatusUpdate(::StringW assetPackName, int32_t assetPackStatus, int64_t assetPackSize, int64_t assetPackBytesDownloaded, int32_t assetPackTransferProgress, int32_t assetPackErrorCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPacks_AssetPackManagerDownloadStatusCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks_AssetPackManagerDownloadStatusCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAssetPacks_AssetPackManagerDownloadStatusCallback(AndroidAssetPacks_AssetPackManagerDownloadStatusCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks_AssetPackManagerDownloadStatusCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAssetPacks_AssetPackManagerDownloadStatusCallback(AndroidAssetPacks_AssetPackManagerDownloadStatusCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19914 };

  /// @brief Field m_Callback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* ___m_Callback;

  /// @brief Field m_AssetPacks, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Android::AndroidAssetPackStatus>* ___m_AssetPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback, ___m_Callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback, ___m_AssetPacks) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Android
// Dependencies UnityEngine.AndroidJavaProxy
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidAssetPacks/AssetPackManagerMobileDataConfirmationCallback
class CORDL_TYPE AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field m_Callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback,
                      put = __cordl_internal_set_m_Callback)) ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* m_Callback;

  static inline ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*
  New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* callback);

  constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* const& __cordl_internal_get_m_Callback() const;

  constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*& __cordl_internal_get_m_Callback();

  constexpr void __cordl_internal_set_m_Callback(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* value);

  /// @brief Method .ctor, addr 0x67fb5e0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* callback);

  /// @brief Method onMobileDataConfirmationResult, addr 0x67fb668, size 0x88, virtual false, abstract: false, final false
  inline void onMobileDataConfirmationResult(bool allowed);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback(AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback(AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19915 };

  /// @brief Field m_Callback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* ___m_Callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback, ___m_Callback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Android
// Dependencies UnityEngine.AndroidJavaProxy
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidAssetPacks/AssetPackManagerStatusQueryCallback
class CORDL_TYPE AndroidAssetPacks_AssetPackManagerStatusQueryCallback : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field m_AssetPackNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetPackNames, put = __cordl_internal_set_m_AssetPackNames)) ::System::Collections::Generic::List_1<::StringW>* m_AssetPackNames;

  /// @brief Field m_Callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback)) ::System::Action_2<
      uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* m_Callback;

  /// @brief Field m_Size, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) int64_t m_Size;

  /// @brief Field m_States, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_States, put = __cordl_internal_set_m_States)) ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* m_States;

  static inline ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*
  New_ctor(::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* callback,
           ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks);

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_AssetPackNames() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_AssetPackNames();

  constexpr ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* const&
  __cordl_internal_get_m_Callback() const;

  constexpr ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*& __cordl_internal_get_m_Callback();

  constexpr int64_t const& __cordl_internal_get_m_Size() const;

  constexpr int64_t& __cordl_internal_get_m_Size();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* const& __cordl_internal_get_m_States() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>*& __cordl_internal_get_m_States();

  constexpr void __cordl_internal_set_m_AssetPackNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void
  __cordl_internal_set_m_Callback(::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* value);

  constexpr void __cordl_internal_set_m_Size(int64_t value);

  constexpr void __cordl_internal_set_m_States(::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* value);

  /// @brief Method .ctor, addr 0x67fb6f0, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*, ::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* callback,
                    ::ArrayW<::StringW, ::Array<::StringW>*> assetPacks);

  /// @brief Method onStatusResult, addr 0x67fb7f0, size 0x360, virtual false, abstract: false, final false
  inline void onStatusResult(int64_t totalBytes, ::ArrayW<::StringW, ::Array<::StringW>*> assetPackNames, ::ArrayW<int32_t, ::Array<int32_t>*> assetPackStatuses,
                             ::ArrayW<int32_t, ::Array<int32_t>*> assetPackErrorCodes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPacks_AssetPackManagerStatusQueryCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks_AssetPackManagerStatusQueryCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAssetPacks_AssetPackManagerStatusQueryCallback(AndroidAssetPacks_AssetPackManagerStatusQueryCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks_AssetPackManagerStatusQueryCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAssetPacks_AssetPackManagerStatusQueryCallback(AndroidAssetPacks_AssetPackManagerStatusQueryCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19916 };

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
static_assert(offsetof(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback, ___m_Callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback, ___m_AssetPackNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback, ___m_States) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback, ___m_Size) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Android
// Dependencies System.Object
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidAssetPacks
class CORDL_TYPE AndroidAssetPacks : public ::System::Object {
public:
  // Declarations
  using AssetPackManagerDownloadStatusCallback = ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback;

  using AssetPackManagerMobileDataConfirmationCallback = ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback;

  using AssetPackManagerStatusQueryCallback = ::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback;

  /// @brief Field s_ApiMissing, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_ApiMissing, put = setStaticF_s_ApiMissing)) bool s_ApiMissing;

  /// @brief Field s_JavaPlayAssetDeliveryWrapper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_JavaPlayAssetDeliveryWrapper, put = setStaticF_s_JavaPlayAssetDeliveryWrapper)) ::UnityEngine::AndroidJavaObject* s_JavaPlayAssetDeliveryWrapper;

  /// @brief Method GetAssetPackManager, addr 0x67fad50, size 0x380, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19917 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPacks, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks*, "UnityEngine.Android", "AndroidAssetPacks");
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerDownloadStatusCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerDownloadStatusCallback");
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallback*, "UnityEngine.Android",
                       "AndroidAssetPacks/AssetPackManagerMobileDataConfirmationCallback");
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks_AssetPackManagerStatusQueryCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerStatusQueryCallback");
NEED_NO_BOX(::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AssetPackManagerDownloadStatusCallback_AndroidAssetPacks___c*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerDownloadStatusCallback/<>c");
