#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/AsyncOpHandlesCacheKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOpHandlesCacheKey)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class AsyncOpHandlesCacheKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey
class CORDL_TYPE AsyncOpHandlesCacheKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Handles, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Handles,
                      put = __cordl_internal_set_m_Handles)) ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_Handles;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept;

  /// @brief Method Equals, addr 0x675f104, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x675f174, size 0x8c, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey* other);

  /// @brief Method Equals, addr 0x675f200, size 0x70, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* other);

  /// @brief Method GetHashCode, addr 0x675f0e8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*
  New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* handles);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_Handles() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_Handles();

  constexpr void __cordl_internal_set_m_Handles(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method .ctor, addr 0x67566dc, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* handles);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>* i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__IOperationCacheKey__() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
  constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* i___UnityEngine__ResourceManagement__Util__IOperationCacheKey() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOpHandlesCacheKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOpHandlesCacheKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOpHandlesCacheKey(AsyncOpHandlesCacheKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOpHandlesCacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOpHandlesCacheKey(AsyncOpHandlesCacheKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18711 };

  /// @brief Field m_Handles, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___m_Handles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey, ___m_Handles) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*, "UnityEngine.ResourceManagement.Util", "AsyncOpHandlesCacheKey");
