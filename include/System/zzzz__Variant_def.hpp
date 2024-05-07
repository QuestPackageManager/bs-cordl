#pragma once
// IWYU pragma private; include "System/Variant.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__BRECORD_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Variant)
namespace System {
struct BRECORD;
}
// Forward declare root types
namespace System {
struct Variant;
}
// Write type traits
MARK_VAL_T(::System::Variant);
// Type: System::Variant
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::Variant
struct CORDL_TYPE Variant {
public:
  // Declarations
  /// @brief Field bRecord, offset 0x8, size 0x10
  __declspec(property(get = __cordl_internal_get_bRecord, put = __cordl_internal_set_bRecord))::System::BRECORD bRecord;

  /// @brief Field bVal, offset 0x8, size 0x1
  __declspec(property(get = __cordl_internal_get_bVal, put = __cordl_internal_set_bVal)) uint8_t bVal;

  /// @brief Field boolVal, offset 0x8, size 0x2
  __declspec(property(get = __cordl_internal_get_boolVal, put = __cordl_internal_set_boolVal)) int16_t boolVal;

  /// @brief Field bstrVal, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_bstrVal, put = __cordl_internal_set_bstrVal)) void* bstrVal;

  /// @brief Field cVal, offset 0x8, size 0x1
  __declspec(property(get = __cordl_internal_get_cVal, put = __cordl_internal_set_cVal)) int8_t cVal;

  /// @brief Field dblVal, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_dblVal, put = __cordl_internal_set_dblVal)) double_t dblVal;

  /// @brief Field fltVal, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_fltVal, put = __cordl_internal_set_fltVal)) float_t fltVal;

  /// @brief Field iVal, offset 0x8, size 0x2
  __declspec(property(get = __cordl_internal_get_iVal, put = __cordl_internal_set_iVal)) int16_t iVal;

  /// @brief Field intVal, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_intVal, put = __cordl_internal_set_intVal)) int32_t intVal;

  /// @brief Field lVal, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_lVal, put = __cordl_internal_set_lVal)) int32_t lVal;

  /// @brief Field llVal, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_llVal, put = __cordl_internal_set_llVal)) int64_t llVal;

  /// @brief Field pdispVal, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_pdispVal, put = __cordl_internal_set_pdispVal)) void* pdispVal;

  /// @brief Field uiVal, offset 0x8, size 0x2
  __declspec(property(get = __cordl_internal_get_uiVal, put = __cordl_internal_set_uiVal)) uint16_t uiVal;

  /// @brief Field uintVal, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_uintVal, put = __cordl_internal_set_uintVal)) uint32_t uintVal;

  /// @brief Field ulVal, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_ulVal, put = __cordl_internal_set_ulVal)) uint32_t ulVal;

  /// @brief Field ullVal, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_ullVal, put = __cordl_internal_set_ullVal)) uint64_t ullVal;

  /// @brief Field vt, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_vt, put = __cordl_internal_set_vt)) int16_t vt;

  /// @brief Field wReserved1, offset 0x2, size 0x2
  __declspec(property(get = __cordl_internal_get_wReserved1, put = __cordl_internal_set_wReserved1)) uint16_t wReserved1;

  /// @brief Field wReserved2, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_wReserved2, put = __cordl_internal_set_wReserved2)) uint16_t wReserved2;

  /// @brief Field wReserved3, offset 0x6, size 0x2
  __declspec(property(get = __cordl_internal_get_wReserved3, put = __cordl_internal_set_wReserved3)) uint16_t wReserved3;

  /// @brief Method Clear, addr 0x298ef60, size 0x74, virtual false, abstract: false, final false
  inline void Clear();

  constexpr ::System::BRECORD const& __cordl_internal_get_bRecord() const;

  constexpr ::System::BRECORD& __cordl_internal_get_bRecord();

  constexpr uint8_t const& __cordl_internal_get_bVal() const;

  constexpr uint8_t& __cordl_internal_get_bVal();

  constexpr int16_t const& __cordl_internal_get_boolVal() const;

  constexpr int16_t& __cordl_internal_get_boolVal();

  constexpr void* const& __cordl_internal_get_bstrVal() const;

  constexpr void*& __cordl_internal_get_bstrVal();

  constexpr int8_t const& __cordl_internal_get_cVal() const;

  constexpr int8_t& __cordl_internal_get_cVal();

  constexpr double_t const& __cordl_internal_get_dblVal() const;

  constexpr double_t& __cordl_internal_get_dblVal();

  constexpr float_t const& __cordl_internal_get_fltVal() const;

  constexpr float_t& __cordl_internal_get_fltVal();

  constexpr int16_t const& __cordl_internal_get_iVal() const;

  constexpr int16_t& __cordl_internal_get_iVal();

  constexpr int32_t const& __cordl_internal_get_intVal() const;

  constexpr int32_t& __cordl_internal_get_intVal();

  constexpr int32_t const& __cordl_internal_get_lVal() const;

  constexpr int32_t& __cordl_internal_get_lVal();

  constexpr int64_t const& __cordl_internal_get_llVal() const;

  constexpr int64_t& __cordl_internal_get_llVal();

  constexpr void* const& __cordl_internal_get_pdispVal() const;

  constexpr void*& __cordl_internal_get_pdispVal();

  constexpr uint16_t const& __cordl_internal_get_uiVal() const;

  constexpr uint16_t& __cordl_internal_get_uiVal();

  constexpr uint32_t const& __cordl_internal_get_uintVal() const;

  constexpr uint32_t& __cordl_internal_get_uintVal();

  constexpr uint32_t const& __cordl_internal_get_ulVal() const;

  constexpr uint32_t& __cordl_internal_get_ulVal();

  constexpr uint64_t const& __cordl_internal_get_ullVal() const;

  constexpr uint64_t& __cordl_internal_get_ullVal();

  constexpr int16_t const& __cordl_internal_get_vt() const;

  constexpr int16_t& __cordl_internal_get_vt();

  constexpr uint16_t const& __cordl_internal_get_wReserved1() const;

  constexpr uint16_t& __cordl_internal_get_wReserved1();

  constexpr uint16_t const& __cordl_internal_get_wReserved2() const;

  constexpr uint16_t& __cordl_internal_get_wReserved2();

  constexpr uint16_t const& __cordl_internal_get_wReserved3() const;

  constexpr uint16_t& __cordl_internal_get_wReserved3();

  constexpr void __cordl_internal_set_bRecord(::System::BRECORD value);

  constexpr void __cordl_internal_set_bVal(uint8_t value);

  constexpr void __cordl_internal_set_boolVal(int16_t value);

  constexpr void __cordl_internal_set_bstrVal(void* value);

  constexpr void __cordl_internal_set_cVal(int8_t value);

  constexpr void __cordl_internal_set_dblVal(double_t value);

  constexpr void __cordl_internal_set_fltVal(float_t value);

  constexpr void __cordl_internal_set_iVal(int16_t value);

  constexpr void __cordl_internal_set_intVal(int32_t value);

  constexpr void __cordl_internal_set_lVal(int32_t value);

  constexpr void __cordl_internal_set_llVal(int64_t value);

  constexpr void __cordl_internal_set_pdispVal(void* value);

  constexpr void __cordl_internal_set_uiVal(uint16_t value);

  constexpr void __cordl_internal_set_uintVal(uint32_t value);

  constexpr void __cordl_internal_set_ulVal(uint32_t value);

  constexpr void __cordl_internal_set_ullVal(uint64_t value);

  constexpr void __cordl_internal_set_vt(int16_t value);

  constexpr void __cordl_internal_set_wReserved1(uint16_t value);

  constexpr void __cordl_internal_set_wReserved2(uint16_t value);

  constexpr void __cordl_internal_set_wReserved3(uint16_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Variant();

  // Ctor Parameters [CppParam { name: "vt", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "wReserved1", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "wReserved2", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "wReserved3", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "llVal", ty: "int64_t",
  // modifiers: "", def_value: None }, CppParam { name: "lVal", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bVal", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "iVal", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "fltVal", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dblVal", ty: "double_t", modifiers:
  // "", def_value: None }, CppParam { name: "boolVal", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "bstrVal", ty: "void*", modifiers: "", def_value: None }, CppParam { name:
  // "cVal", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "uiVal", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "ulVal", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "ullVal", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "intVal", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "uintVal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "pdispVal", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "bRecord", ty: "::System::BRECORD",
  // modifiers: "", def_value: None }]
  constexpr Variant(int16_t vt, uint16_t wReserved1, uint16_t wReserved2, uint16_t wReserved3, int64_t llVal, int32_t lVal, uint8_t bVal, int16_t iVal, float_t fltVal, double_t dblVal,
                    int16_t boolVal, void* bstrVal, int8_t cVal, uint16_t uiVal, uint32_t ulVal, uint64_t ullVal, int32_t intVal, uint32_t uintVal, void* pdispVal, ::System::BRECORD bRecord) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___vt_padding[0x0];
      /// @brief Field vt, offset: 0x0, size: 0x2, def value: None
      int16_t ___vt;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___vt_padding_forAlignment[0x0];
      /// @brief Field vt, offset: 0x0, size: 0x2, def value: None
      int16_t ___vt_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___wReserved1_padding[0x2];
      /// @brief Field wReserved1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___wReserved1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___wReserved1_padding_forAlignment[0x2];
      /// @brief Field wReserved1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___wReserved1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___wReserved2_padding[0x4];
      /// @brief Field wReserved2, offset: 0x4, size: 0x2, def value: None
      uint16_t ___wReserved2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___wReserved2_padding_forAlignment[0x4];
      /// @brief Field wReserved2, offset: 0x4, size: 0x2, def value: None
      uint16_t ___wReserved2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___wReserved3_padding[0x6];
      /// @brief Field wReserved3, offset: 0x6, size: 0x2, def value: None
      uint16_t ___wReserved3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___wReserved3_padding_forAlignment[0x6];
      /// @brief Field wReserved3, offset: 0x6, size: 0x2, def value: None
      uint16_t ___wReserved3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___llVal_padding[0x8];
      /// @brief Field llVal, offset: 0x8, size: 0x8, def value: None
      int64_t ___llVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___llVal_padding_forAlignment[0x8];
      /// @brief Field llVal, offset: 0x8, size: 0x8, def value: None
      int64_t ___llVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___lVal_padding[0x8];
      /// @brief Field lVal, offset: 0x8, size: 0x4, def value: None
      int32_t ___lVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___lVal_padding_forAlignment[0x8];
      /// @brief Field lVal, offset: 0x8, size: 0x4, def value: None
      int32_t ___lVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___bVal_padding[0x8];
      /// @brief Field bVal, offset: 0x8, size: 0x1, def value: None
      uint8_t ___bVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___bVal_padding_forAlignment[0x8];
      /// @brief Field bVal, offset: 0x8, size: 0x1, def value: None
      uint8_t ___bVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___iVal_padding[0x8];
      /// @brief Field iVal, offset: 0x8, size: 0x2, def value: None
      int16_t ___iVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___iVal_padding_forAlignment[0x8];
      /// @brief Field iVal, offset: 0x8, size: 0x2, def value: None
      int16_t ___iVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___fltVal_padding[0x8];
      /// @brief Field fltVal, offset: 0x8, size: 0x4, def value: None
      float_t ___fltVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___fltVal_padding_forAlignment[0x8];
      /// @brief Field fltVal, offset: 0x8, size: 0x4, def value: None
      float_t ___fltVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___dblVal_padding[0x8];
      /// @brief Field dblVal, offset: 0x8, size: 0x8, def value: None
      double_t ___dblVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___dblVal_padding_forAlignment[0x8];
      /// @brief Field dblVal, offset: 0x8, size: 0x8, def value: None
      double_t ___dblVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___boolVal_padding[0x8];
      /// @brief Field boolVal, offset: 0x8, size: 0x2, def value: None
      int16_t ___boolVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___boolVal_padding_forAlignment[0x8];
      /// @brief Field boolVal, offset: 0x8, size: 0x2, def value: None
      int16_t ___boolVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___bstrVal_padding[0x8];
      /// @brief Field bstrVal, offset: 0x8, size: 0x8, def value: None
      void* ___bstrVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___bstrVal_padding_forAlignment[0x8];
      /// @brief Field bstrVal, offset: 0x8, size: 0x8, def value: None
      void* ___bstrVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___cVal_padding[0x8];
      /// @brief Field cVal, offset: 0x8, size: 0x1, def value: None
      int8_t ___cVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___cVal_padding_forAlignment[0x8];
      /// @brief Field cVal, offset: 0x8, size: 0x1, def value: None
      int8_t ___cVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___uiVal_padding[0x8];
      /// @brief Field uiVal, offset: 0x8, size: 0x2, def value: None
      uint16_t ___uiVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___uiVal_padding_forAlignment[0x8];
      /// @brief Field uiVal, offset: 0x8, size: 0x2, def value: None
      uint16_t ___uiVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ulVal_padding[0x8];
      /// @brief Field ulVal, offset: 0x8, size: 0x4, def value: None
      uint32_t ___ulVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ulVal_padding_forAlignment[0x8];
      /// @brief Field ulVal, offset: 0x8, size: 0x4, def value: None
      uint32_t ___ulVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ullVal_padding[0x8];
      /// @brief Field ullVal, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ullVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ullVal_padding_forAlignment[0x8];
      /// @brief Field ullVal, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ullVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___intVal_padding[0x8];
      /// @brief Field intVal, offset: 0x8, size: 0x4, def value: None
      int32_t ___intVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___intVal_padding_forAlignment[0x8];
      /// @brief Field intVal, offset: 0x8, size: 0x4, def value: None
      int32_t ___intVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___uintVal_padding[0x8];
      /// @brief Field uintVal, offset: 0x8, size: 0x4, def value: None
      uint32_t ___uintVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___uintVal_padding_forAlignment[0x8];
      /// @brief Field uintVal, offset: 0x8, size: 0x4, def value: None
      uint32_t ___uintVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___pdispVal_padding[0x8];
      /// @brief Field pdispVal, offset: 0x8, size: 0x8, def value: None
      void* ___pdispVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___pdispVal_padding_forAlignment[0x8];
      /// @brief Field pdispVal, offset: 0x8, size: 0x8, def value: None
      void* ___pdispVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___bRecord_padding[0x8];
      /// @brief Field bRecord, offset: 0x8, size: 0x10, def value: None
      ::System::BRECORD ___bRecord;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___bRecord_padding_forAlignment[0x8];
      /// @brief Field bRecord, offset: 0x8, size: 0x10, def value: None
      ::System::BRECORD ___bRecord_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Variant, 0x18>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Variant, "System", "Variant");
