#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputedTransitionUtils)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class __ComputedTransitionUtils____c;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct EasingMode;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ComputedTransitionUtils;
}
namespace UnityEngine::UIElements {
class __ComputedTransitionUtils____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ComputedTransitionUtils);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ComputedTransitionUtils____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7288))
// CS Name: ::ComputedTransitionUtils::<>c*
class CORDL_TYPE __ComputedTransitionUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__ComputedTransitionUtils____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Func_2<float_t, float_t>* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1))::System::Func_2<float_t, float_t>* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2))::System::Func_2<float_t, float_t>* __9__12_2;

  /// @brief Field <>9__12_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_3, put = setStaticF___9__12_3))::System::Func_2<float_t, float_t>* __9__12_3;

  /// @brief Field <>9__12_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_4, put = setStaticF___9__12_4))::System::Func_2<float_t, float_t>* __9__12_4;

  /// @brief Field <>9__12_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_5, put = setStaticF___9__12_5))::System::Func_2<float_t, float_t>* __9__12_5;

  /// @brief Field <>9__12_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_6, put = setStaticF___9__12_6))::System::Func_2<float_t, float_t>* __9__12_6;

  /// @brief Field <>9__12_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_7, put = setStaticF___9__12_7))::System::Func_2<float_t, float_t>* __9__12_7;

  /// @brief Field <>9__12_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_8, put = setStaticF___9__12_8))::System::Func_2<float_t, float_t>* __9__12_8;

  /// @brief Field <>9__12_9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_9, put = setStaticF___9__12_9))::System::Func_2<float_t, float_t>* __9__12_9;

  /// @brief Field <>9__12_10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_10, put = setStaticF___9__12_10))::System::Func_2<float_t, float_t>* __9__12_10;

  /// @brief Field <>9__12_11, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_11, put = setStaticF___9__12_11))::System::Func_2<float_t, float_t>* __9__12_11;

  /// @brief Field <>9__12_12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_12, put = setStaticF___9__12_12))::System::Func_2<float_t, float_t>* __9__12_12;

  /// @brief Field <>9__12_13, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_13, put = setStaticF___9__12_13))::System::Func_2<float_t, float_t>* __9__12_13;

  /// @brief Field <>9__12_14, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_14, put = setStaticF___9__12_14))::System::Func_2<float_t, float_t>* __9__12_14;

  /// @brief Field <>9__12_15, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_15, put = setStaticF___9__12_15))::System::Func_2<float_t, float_t>* __9__12_15;

  /// @brief Field <>9__12_16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_16, put = setStaticF___9__12_16))::System::Func_2<float_t, float_t>* __9__12_16;

  /// @brief Field <>9__12_17, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_17, put = setStaticF___9__12_17))::System::Func_2<float_t, float_t>* __9__12_17;

  /// @brief Field <>9__12_18, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_18, put = setStaticF___9__12_18))::System::Func_2<float_t, float_t>* __9__12_18;

  /// @brief Field <>9__12_19, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_19, put = setStaticF___9__12_19))::System::Func_2<float_t, float_t>* __9__12_19;

  /// @brief Field <>9__12_20, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_20, put = setStaticF___9__12_20))::System::Func_2<float_t, float_t>* __9__12_20;

  /// @brief Field <>9__12_21, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_21, put = setStaticF___9__12_21))::System::Func_2<float_t, float_t>* __9__12_21;

  /// @brief Field <>9__12_22, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_22, put = setStaticF___9__12_22))::System::Func_2<float_t, float_t>* __9__12_22;

  static inline void setStaticF___9(::UnityEngine::UIElements::__ComputedTransitionUtils____c* value);

  static inline ::UnityEngine::UIElements::__ComputedTransitionUtils____c* getStaticF___9();

  static inline void setStaticF___9__12_0(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_0();

  static inline void setStaticF___9__12_1(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_1();

  static inline void setStaticF___9__12_2(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_2();

  static inline void setStaticF___9__12_3(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_3();

  static inline void setStaticF___9__12_4(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_4();

  static inline void setStaticF___9__12_5(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_5();

  static inline void setStaticF___9__12_6(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_6();

  static inline void setStaticF___9__12_7(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_7();

  static inline void setStaticF___9__12_8(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_8();

  static inline void setStaticF___9__12_9(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_9();

  static inline void setStaticF___9__12_10(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_10();

  static inline void setStaticF___9__12_11(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_11();

  static inline void setStaticF___9__12_12(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_12();

  static inline void setStaticF___9__12_13(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_13();

  static inline void setStaticF___9__12_14(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_14();

  static inline void setStaticF___9__12_15(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_15();

  static inline void setStaticF___9__12_16(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_16();

  static inline void setStaticF___9__12_17(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_17();

  static inline void setStaticF___9__12_18(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_18();

  static inline void setStaticF___9__12_19(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_19();

  static inline void setStaticF___9__12_20(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_20();

  static inline void setStaticF___9__12_21(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_21();

  static inline void setStaticF___9__12_22(::System::Func_2<float_t, float_t>* value);

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_22();

  static inline ::UnityEngine::UIElements::__ComputedTransitionUtils____c* New_ctor();

  /// @brief Method .ctor, addr 0x2e6ef6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ConvertTransitionFunction>b__12_0, addr 0x2e6ef74, size 0x30, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_0(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_1, addr 0x2e6efa4, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_1(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_2, addr 0x2e6efac, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_2(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_3, addr 0x2e6efb4, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_3(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_4, addr 0x2e6efbc, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_4(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_5, addr 0x2e6efc4, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_5(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_6, addr 0x2e6efcc, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_6(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_7, addr 0x2e6efd4, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_7(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_8, addr 0x2e6efdc, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_8(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_9, addr 0x2e6efe4, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_9(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_10, addr 0x2e6efec, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_10(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_11, addr 0x2e6eff4, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_11(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_12, addr 0x2e6effc, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_12(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_13, addr 0x2e6f004, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_13(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_14, addr 0x2e6f00c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_14(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_15, addr 0x2e6f014, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_15(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_16, addr 0x2e6f01c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_16(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_17, addr 0x2e6f024, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_17(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_18, addr 0x2e6f02c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_18(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_19, addr 0x2e6f034, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_19(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_20, addr 0x2e6f03c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_20(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_21, addr 0x2e6f044, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_21(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_22, addr 0x2e6f04c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_22(float_t t);

  // Ctor Parameters [CppParam { name: "", ty: "__ComputedTransitionUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ComputedTransitionUtils____c(__ComputedTransitionUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ComputedTransitionUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ComputedTransitionUtils____c(__ComputedTransitionUtils____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ComputedTransitionUtils____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ComputedTransitionUtils____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ComputedTransitionUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7289))
// CS Name: ::UnityEngine.UIElements::ComputedTransitionUtils*
class CORDL_TYPE ComputedTransitionUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__ComputedTransitionUtils____c;

  /// @brief Field s_ComputedTransitionsBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ComputedTransitionsBuffer,
                             put = setStaticF_s_ComputedTransitionsBuffer))::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* s_ComputedTransitionsBuffer;

  static inline void setStaticF_s_ComputedTransitionsBuffer(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* getStaticF_s_ComputedTransitionsBuffer();

  /// @brief Method UpdateComputedTransitions, addr 0x2e6d338, size 0x64, virtual false, abstract: false, final false
  static inline void UpdateComputedTransitions(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method HasTransitionProperty, addr 0x2e6d540, size 0xcc, virtual false, abstract: false, final false
  static inline bool HasTransitionProperty(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetTransitionProperty, addr 0x2e6d60c, size 0x13c, virtual false, abstract: false, final false
  static inline bool GetTransitionProperty(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                           ByRef<::UnityEngine::UIElements::ComputedTransitionProperty> result);

  /// @brief Method GetOrComputeTransitionPropertyData, addr 0x2e6d39c, size 0x1a4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty, ::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>
  GetOrComputeTransitionPropertyData(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method GetTransitionHashCode, addr 0x2e6d748, size 0x49c, virtual false, abstract: false, final false
  static inline int32_t GetTransitionHashCode(ByRef<::UnityEngine::UIElements::ComputedStyle> cs);

  /// @brief Method SameTransitionProperty, addr 0x2e6de8c, size 0x140, virtual false, abstract: false, final false
  static inline bool SameTransitionProperty(ByRef<::UnityEngine::UIElements::ComputedStyle> x, ByRef<::UnityEngine::UIElements::ComputedStyle> y);

  /// @brief Method SameTransitionProperty, addr 0x2e6dfcc, size 0xec, virtual false, abstract: false, final false
  static inline bool SameTransitionProperty(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* a,
                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* b);

  /// @brief Method SameTransitionProperty, addr 0x2e6e0b8, size 0xf4, virtual false, abstract: false, final false
  static inline bool SameTransitionProperty(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* a,
                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* b);

  /// @brief Method ComputeTransitionPropertyData, addr 0x2e6dbe4, size 0x280, virtual false, abstract: false, final false
  static inline void ComputeTransitionPropertyData(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* outData);

  /// @brief Method GetWrappingTransitionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetWrappingTransitionData(::System::Collections::Generic::List_1<T>* list, int32_t i, T defaultValue);

  /// @brief Method ConvertTransitionTime, addr 0x2e6e1e0, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ConvertTransitionTime(::UnityEngine::UIElements::TimeValue time);

  /// @brief Method ConvertTransitionFunction, addr 0x2e6e2d4, size 0xba8, virtual false, abstract: false, final false
  static inline ::System::Func_2<float_t, float_t>* ConvertTransitionFunction(::UnityEngine::UIElements::EasingMode mode);

  // Ctor Parameters [CppParam { name: "", ty: "ComputedTransitionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputedTransitionUtils(ComputedTransitionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputedTransitionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputedTransitionUtils(ComputedTransitionUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputedTransitionUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ComputedTransitionUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ComputedTransitionUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ComputedTransitionUtils*, "UnityEngine.UIElements", "ComputedTransitionUtils");
NEED_NO_BOX(::UnityEngine::UIElements::__ComputedTransitionUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ComputedTransitionUtils____c*, "UnityEngine.UIElements", "ComputedTransitionUtils/<>c");
