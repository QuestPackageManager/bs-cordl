#pragma once
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
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class AsyncOpHandlesCacheKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey);
// Type: UnityEngine.ResourceManagement.Util::AsyncOpHandlesCacheKey
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14243))
// CS Name: ::UnityEngine.ResourceManagement.Util::AsyncOpHandlesCacheKey*
class CORDL_TYPE AsyncOpHandlesCacheKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Handles, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Handles, put = __set_m_Handles))::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_Handles;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __get_m_Handles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __get_m_Handles() const;

  constexpr void __set_m_Handles(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  static inline ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*
  New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* handles);

  /// @brief Method .ctor addr 0x2a4a370 size 0x90 virtual false final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* handles);

  /// @brief Method GetHashCode addr 0x2a4f148 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2a4f168 size 0x64 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2a4f248 size 0x64 virtual true final true
  inline bool Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* other);

  /// @brief Method Equals addr 0x2a4f1cc size 0x7c virtual false final false
  inline bool Equals(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey* other);

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOpHandlesCacheKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOpHandlesCacheKey(AsyncOpHandlesCacheKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOpHandlesCacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOpHandlesCacheKey(AsyncOpHandlesCacheKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOpHandlesCacheKey();

public:
  /// @brief Field m_Handles, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ___m_Handles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey, ___m_Handles) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*, "UnityEngine.ResourceManagement.Util", "AsyncOpHandlesCacheKey");
