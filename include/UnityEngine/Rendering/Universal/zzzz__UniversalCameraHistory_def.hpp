#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalCameraHistory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalCameraHistory)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalCameraHistory_Item;
}
namespace UnityEngine::Rendering::Universal {
template <typename T> class UniversalCameraHistory_TypeId_1;
}
namespace UnityEngine::Rendering {
class BufferedRTHandleSystem;
}
namespace UnityEngine::Rendering {
class ContextItem;
}
namespace UnityEngine::Rendering {
class ICameraHistoryReadAccess_HistoryRequestDelegate;
}
namespace UnityEngine::Rendering {
class ICameraHistoryReadAccess;
}
namespace UnityEngine::Rendering {
class ICameraHistoryWriteAccess;
}
namespace UnityEngine::Rendering {
class IPerFrameHistoryAccessTracker;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalCameraHistory;
}
namespace UnityEngine::Rendering::Universal {
template <typename T> class UniversalCameraHistory_TypeId_1;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalCameraHistory_Item;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalCameraHistory);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalCameraHistory/TypeId`1<T>
class CORDL_TYPE UniversalCameraHistory_TypeId_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_value, put = setStaticF_value)) uint32_t value;

  static inline uint32_t getStaticF_value();

  static inline void setStaticF_value(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalCameraHistory_TypeId_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalCameraHistory_TypeId_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalCameraHistory_TypeId_1(UniversalCameraHistory_TypeId_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalCameraHistory_TypeId_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalCameraHistory_TypeId_1(UniversalCameraHistory_TypeId_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12970 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalCameraHistory/Item
struct CORDL_TYPE UniversalCameraHistory_Item {
public:
  // Declarations
  /// @brief Method Reset, addr 0x67118d8, size 0x2c, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalCameraHistory_Item();

  // Ctor Parameters [CppParam { name: "storage", ty: "::UnityEngine::Rendering::ContextItem*", modifiers: "", def_value: None }, CppParam { name: "requestVersion", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "writeVersion", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UniversalCameraHistory_Item(::UnityEngine::Rendering::ContextItem* storage, int32_t requestVersion, int32_t writeVersion) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12971 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field storage, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ContextItem* storage;

  /// @brief Field requestVersion, offset: 0x8, size: 0x4, def value: None
  int32_t requestVersion;

  /// @brief Field writeVersion, offset: 0xc, size: 0x4, def value: None
  int32_t writeVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, storage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, requestVersion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, writeVersion) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalCameraHistory
class CORDL_TYPE UniversalCameraHistory : public ::System::Object {
public:
  // Declarations
  using Item = ::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item;

  template <typename T> using TypeId_1 = ::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1<T>;

  /// @brief Field OnGatherHistoryRequests, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_OnGatherHistoryRequests,
                      put = __cordl_internal_set_OnGatherHistoryRequests)) ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* OnGatherHistoryRequests;

  /// @brief Field m_HistoryTextures, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HistoryTextures, put = __cordl_internal_set_m_HistoryTextures)) ::UnityEngine::Rendering::BufferedRTHandleSystem* m_HistoryTextures;

  /// @brief Field m_Items, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Items,
      put = __cordl_internal_set_m_Items)) ::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, ::Array<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>*>
      m_Items;

  /// @brief Field m_Version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Field s_TypeCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_TypeCount, put = setStaticF_s_TypeCount)) uint32_t s_TypeCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::ICameraHistoryReadAccess"
  constexpr operator ::UnityEngine::Rendering::ICameraHistoryReadAccess*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::ICameraHistoryWriteAccess"
  constexpr operator ::UnityEngine::Rendering::ICameraHistoryWriteAccess*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IPerFrameHistoryAccessTracker"
  constexpr operator ::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*() noexcept;

  /// @brief Method Dispose, addr 0x6711904, size 0x90, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GatherHistoryRequests, addr 0x6711994, size 0x20, virtual false, abstract: false, final false
  inline void GatherHistoryRequests();

  /// @brief Method GetHistoryForRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename Type> inline Type GetHistoryForRead();

  /// @brief Method GetHistoryForWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename Type> inline Type GetHistoryForWrite();

  /// @brief Method IsAccessRequested, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename Type> inline bool IsAccessRequested();

  /// @brief Method IsValid, addr 0x67119f4, size 0x40, virtual false, abstract: false, final false
  inline bool IsValid(int32_t i);

  /// @brief Method IsValidRequest, addr 0x67119b4, size 0x40, virtual false, abstract: false, final false
  inline bool IsValidRequest(int32_t i);

  /// @brief Method IsWritten, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename Type> inline bool IsWritten();

  static inline ::UnityEngine::Rendering::Universal::UniversalCameraHistory* New_ctor();

  /// @brief Method ReleaseUnusedHistory, addr 0x6711a34, size 0xbc, virtual false, abstract: false, final false
  inline void ReleaseUnusedHistory();

  /// @brief Method RequestAccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename Type> inline void RequestAccess();

  /// @brief Method SwapAndSetReferenceSize, addr 0x6711af0, size 0x18, virtual false, abstract: false, final false
  inline void SwapAndSetReferenceSize(int32_t cameraWidth, int32_t cameraHeight);

  constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* const& __cordl_internal_get_OnGatherHistoryRequests() const;

  constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*& __cordl_internal_get_OnGatherHistoryRequests();

  constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem* const& __cordl_internal_get_m_HistoryTextures() const;

  constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem*& __cordl_internal_get_m_HistoryTextures();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, ::Array<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>*> const&
  __cordl_internal_get_m_Items() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, ::Array<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>*>& __cordl_internal_get_m_Items();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value);

  constexpr void __cordl_internal_set_m_HistoryTextures(::UnityEngine::Rendering::BufferedRTHandleSystem* value);

  constexpr void
  __cordl_internal_set_m_Items(::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, ::Array<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>*> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x67117e4, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnGatherHistoryRequests, addr 0x671168c, size 0xac, virtual true, abstract: false, final true
  inline void add_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value);

  static inline uint32_t getStaticF_s_TypeCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::ICameraHistoryReadAccess"
  constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess* i___UnityEngine__Rendering__ICameraHistoryReadAccess() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::ICameraHistoryWriteAccess"
  constexpr ::UnityEngine::Rendering::ICameraHistoryWriteAccess* i___UnityEngine__Rendering__ICameraHistoryWriteAccess() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IPerFrameHistoryAccessTracker"
  constexpr ::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* i___UnityEngine__Rendering__IPerFrameHistoryAccessTracker() noexcept;

  /// @brief Method remove_OnGatherHistoryRequests, addr 0x6711738, size 0xac, virtual true, abstract: false, final true
  inline void remove_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value);

  static inline void setStaticF_s_TypeCount(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalCameraHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalCameraHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalCameraHistory(UniversalCameraHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalCameraHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalCameraHistory(UniversalCameraHistory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12972 };

  /// @brief Field k_ValidVersionCount offset 0xffffffff size 0x4
  static constexpr int32_t k_ValidVersionCount{ static_cast<int32_t>(0x2) };

  /// @brief Field m_Items, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, ::Array<::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item>*> ___m_Items;

  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_HistoryTextures, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::BufferedRTHandleSystem* ___m_HistoryTextures;

  /// @brief Field OnGatherHistoryRequests, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* ___OnGatherHistoryRequests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory, ___m_Items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory, ___m_HistoryTextures) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraHistory, ___OnGatherHistoryRequests) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalCameraHistory, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalCameraHistory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalCameraHistory*, "UnityEngine.Rendering.Universal", "UniversalCameraHistory");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::UniversalCameraHistory_TypeId_1, "UnityEngine.Rendering.Universal", "UniversalCameraHistory/TypeId`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalCameraHistory_Item, "UnityEngine.Rendering.Universal", "UniversalCameraHistory/Item");
