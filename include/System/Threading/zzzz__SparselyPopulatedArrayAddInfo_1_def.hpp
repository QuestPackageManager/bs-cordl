#pragma once
// IWYU pragma private; include "System/Threading/SparselyPopulatedArrayAddInfo_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SparselyPopulatedArrayAddInfo_1)
namespace System::Threading {
template <typename T> class SparselyPopulatedArrayFragment_1;
}
// Forward declare root types
namespace System::Threading {
template <typename T> struct SparselyPopulatedArrayAddInfo_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Threading::SparselyPopulatedArrayAddInfo_1);
// Type: System.Threading::SparselyPopulatedArrayAddInfo`1
// SizeInfo { instance_size: 16, native_size: 28, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::System.Threading::SparselyPopulatedArrayAddInfo`1<T>
struct CORDL_TYPE SparselyPopulatedArrayAddInfo_1 {
public:
  // Declarations
  __declspec(property(get = get_Index)) int32_t Index;

  __declspec(property(get = get_Source)) ::System::Threading::SparselyPopulatedArrayFragment_1<T>* Source;

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::SparselyPopulatedArrayFragment_1<T>* source, int32_t index);

  /// @brief Method get_Index, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Index();

  /// @brief Method get_Source, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Source();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SparselyPopulatedArrayAddInfo_1();

  // Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr SparselyPopulatedArrayAddInfo_1(::System::Threading::SparselyPopulatedArrayFragment_1<T>* _source, int32_t _index) noexcept;

  /// @brief Field _source, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::SparselyPopulatedArrayFragment_1<T>* _source;

  /// @brief Field _index, offset: 0x8, size: 0x4, def value: None
  int32_t _index;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2696 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::SparselyPopulatedArrayAddInfo_1, "System.Threading", "SparselyPopulatedArrayAddInfo`1");
