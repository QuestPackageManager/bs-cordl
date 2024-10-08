#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizeQueue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedSizeQueue_1)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class FixedSizeQueue_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::FixedSizeQueue_1);
// Type: ::FixedSizeQueue`1
// SizeInfo { instance_size: 32, native_size: 28, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::FixedSizeQueue`1<T>*
class CORDL_TYPE FixedSizeQueue_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::System::Collections::Generic::List_1<T>* _data;

  /// @brief Field _queueSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__queueSize, put = __cordl_internal_set__queueSize)) int32_t _queueSize;

  __declspec(property(get = get_data)) ::System::Collections::Generic::IReadOnlyList_1<T>* data;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  static inline ::GlobalNamespace::FixedSizeQueue_1<T>* New_ctor(::System::Collections::Generic::List_1<T>* data, int32_t queueSize);

  static inline ::GlobalNamespace::FixedSizeQueue_1<T>* New_ctor(int32_t queueSize);

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get__data() const;

  constexpr int32_t const& __cordl_internal_get__queueSize() const;

  constexpr int32_t& __cordl_internal_get__queueSize();

  constexpr void __cordl_internal_set__data(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set__queueSize(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<T>* data, int32_t queueSize);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t queueSize);

  /// @brief Method get_data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<T>* get_data();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedSizeQueue_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedSizeQueue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedSizeQueue_1(FixedSizeQueue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedSizeQueue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedSizeQueue_1(FixedSizeQueue_1 const&) = delete;

  /// @brief Field _data, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____data;

  /// @brief Field _queueSize, offset: 0x18, size: 0x4, def value: None
  int32_t ____queueSize;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FixedSizeQueue_1, "", "FixedSizeQueue`1");
