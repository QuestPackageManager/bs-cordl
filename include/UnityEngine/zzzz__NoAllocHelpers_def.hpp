#pragma once
// IWYU pragma private; include "UnityEngine/NoAllocHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoAllocHelpers)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class NoAllocHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::NoAllocHelpers);
// Type: UnityEngine::NoAllocHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::NoAllocHelpers*
class CORDL_TYPE NoAllocHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnsureListElemCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void EnsureListElemCount(::System::Collections::Generic::List_1<T>* list, int32_t count);

  /// @brief Method ExtractArrayFromList, addr 0x484b444, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Array* ExtractArrayFromList(::System::Object* list);

  /// @brief Method ExtractArrayFromListT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ExtractArrayFromListT(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method Internal_ResizeList, addr 0x484b400, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_ResizeList(::System::Object* list, int32_t size);

  /// @brief Method ResizeList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ResizeList(::System::Collections::Generic::List_1<T>* list, int32_t size);

  /// @brief Method SafeLength, addr 0x484b3f0, size 0x10, virtual false, abstract: false, final false
  static inline int32_t SafeLength(::System::Array* values);

  /// @brief Method SafeLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t SafeLength(::System::Collections::Generic::List_1<T>* values);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoAllocHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoAllocHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoAllocHelpers(NoAllocHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoAllocHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoAllocHelpers(NoAllocHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::NoAllocHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::NoAllocHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NoAllocHelpers*, "UnityEngine", "NoAllocHelpers");
