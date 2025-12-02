#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeReferenceUnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NativeReferenceUnsafeUtility)
namespace Unity::Collections {
template <typename T> struct NativeReference_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeReferenceUnsafeUtility;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeReferenceUnsafeUtility
class CORDL_TYPE NativeReferenceUnsafeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetUnsafePtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* GetUnsafePtr(::Unity::Collections::NativeReference_1<T> reference);

  /// @brief Method GetUnsafePtrWithoutChecks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* GetUnsafePtrWithoutChecks(::Unity::Collections::NativeReference_1<T> reference);

  /// @brief Method GetUnsafeReadOnlyPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* GetUnsafeReadOnlyPtr(::Unity::Collections::NativeReference_1<T> reference);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeReferenceUnsafeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeReferenceUnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeReferenceUnsafeUtility(NativeReferenceUnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeReferenceUnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeReferenceUnsafeUtility(NativeReferenceUnsafeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15710 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeReferenceUnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "NativeReferenceUnsafeUtility");
