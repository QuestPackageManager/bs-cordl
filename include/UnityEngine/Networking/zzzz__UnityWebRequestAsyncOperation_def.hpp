#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequestAsyncOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestAsyncOperation)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation_BindingsMarshaller;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UnityWebRequestAsyncOperation);
MARK_REF_PTR_T(::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UnityWebRequestAsyncOperation/BindingsMarshaller
class CORDL_TYPE UnityWebRequestAsyncOperation_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToManaged, addr 0x6c5d8a4, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* ConvertToManaged(::System::IntPtr ptr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestAsyncOperation_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperation_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestAsyncOperation_BindingsMarshaller(UnityWebRequestAsyncOperation_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperation_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestAsyncOperation_BindingsMarshaller(UnityWebRequestAsyncOperation_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22032 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies UnityEngine.AsyncOperation
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UnityWebRequestAsyncOperation
class CORDL_TYPE UnityWebRequestAsyncOperation : public ::UnityEngine::AsyncOperation {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller;

  /// @brief Field <webRequest>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__webRequest_k__BackingField,
                      put = __cordl_internal_set__webRequest_k__BackingField)) ::UnityEngine::Networking::UnityWebRequest* _webRequest_k__BackingField;

  __declspec(property(get = get_webRequest, put = set_webRequest)) ::UnityEngine::Networking::UnityWebRequest* webRequest;

  static inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* New_ctor(::System::IntPtr ptr);

  constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__webRequest_k__BackingField() const;

  constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__webRequest_k__BackingField();

  constexpr void __cordl_internal_set__webRequest_k__BackingField(::UnityEngine::Networking::UnityWebRequest* value);

  /// @brief Method .ctor, addr 0x6c5d848, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method get_webRequest, addr 0x6c5d894, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest* get_webRequest();

  /// @brief Method set_webRequest, addr 0x6c5d89c, size 0x8, virtual false, abstract: false, final false
  inline void set_webRequest(::UnityEngine::Networking::UnityWebRequest* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestAsyncOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestAsyncOperation(UnityWebRequestAsyncOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestAsyncOperation(UnityWebRequestAsyncOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22033 };

  /// @brief Field <webRequest>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* ____webRequest_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UnityWebRequestAsyncOperation, ____webRequest_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequestAsyncOperation, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequestAsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, "UnityEngine.Networking", "UnityWebRequestAsyncOperation");
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequestAsyncOperation_BindingsMarshaller*, "UnityEngine.Networking", "UnityWebRequestAsyncOperation/BindingsMarshaller");
