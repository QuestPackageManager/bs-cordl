#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ComputedTransitionUtils.hpp"
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
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
namespace UnityEngine::UIElements {
struct EasingMode;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
class __ComputedTransitionUtils____c;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ComputedTransitionUtils::<>c*
class CORDL_TYPE __ComputedTransitionUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__ComputedTransitionUtils____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_2<float_t, float_t>* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1)) ::System::Func_2<float_t, float_t>* __9__12_1;

  /// @brief Field <>9__12_10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_10, put = setStaticF___9__12_10)) ::System::Func_2<float_t, float_t>* __9__12_10;

  /// @brief Field <>9__12_11, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_11, put = setStaticF___9__12_11)) ::System::Func_2<float_t, float_t>* __9__12_11;

  /// @brief Field <>9__12_12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_12, put = setStaticF___9__12_12)) ::System::Func_2<float_t, float_t>* __9__12_12;

  /// @brief Field <>9__12_13, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_13, put = setStaticF___9__12_13)) ::System::Func_2<float_t, float_t>* __9__12_13;

  /// @brief Field <>9__12_14, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_14, put = setStaticF___9__12_14)) ::System::Func_2<float_t, float_t>* __9__12_14;

  /// @brief Field <>9__12_15, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_15, put = setStaticF___9__12_15)) ::System::Func_2<float_t, float_t>* __9__12_15;

  /// @brief Field <>9__12_16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_16, put = setStaticF___9__12_16)) ::System::Func_2<float_t, float_t>* __9__12_16;

  /// @brief Field <>9__12_17, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_17, put = setStaticF___9__12_17)) ::System::Func_2<float_t, float_t>* __9__12_17;

  /// @brief Field <>9__12_18, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_18, put = setStaticF___9__12_18)) ::System::Func_2<float_t, float_t>* __9__12_18;

  /// @brief Field <>9__12_19, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_19, put = setStaticF___9__12_19)) ::System::Func_2<float_t, float_t>* __9__12_19;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2)) ::System::Func_2<float_t, float_t>* __9__12_2;

  /// @brief Field <>9__12_20, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_20, put = setStaticF___9__12_20)) ::System::Func_2<float_t, float_t>* __9__12_20;

  /// @brief Field <>9__12_21, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_21, put = setStaticF___9__12_21)) ::System::Func_2<float_t, float_t>* __9__12_21;

  /// @brief Field <>9__12_22, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_22, put = setStaticF___9__12_22)) ::System::Func_2<float_t, float_t>* __9__12_22;

  /// @brief Field <>9__12_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_3, put = setStaticF___9__12_3)) ::System::Func_2<float_t, float_t>* __9__12_3;

  /// @brief Field <>9__12_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_4, put = setStaticF___9__12_4)) ::System::Func_2<float_t, float_t>* __9__12_4;

  /// @brief Field <>9__12_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_5, put = setStaticF___9__12_5)) ::System::Func_2<float_t, float_t>* __9__12_5;

  /// @brief Field <>9__12_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_6, put = setStaticF___9__12_6)) ::System::Func_2<float_t, float_t>* __9__12_6;

  /// @brief Field <>9__12_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_7, put = setStaticF___9__12_7)) ::System::Func_2<float_t, float_t>* __9__12_7;

  /// @brief Field <>9__12_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_8, put = setStaticF___9__12_8)) ::System::Func_2<float_t, float_t>* __9__12_8;

  /// @brief Field <>9__12_9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_9, put = setStaticF___9__12_9)) ::System::Func_2<float_t, float_t>* __9__12_9;

  static inline ::UnityEngine::UIElements::__ComputedTransitionUtils____c* New_ctor();

  /// @brief Method <ConvertTransitionFunction>b__12_0, addr 0x4a0489c, size 0x30, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_0(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_1, addr 0x4a048cc, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_1(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_10, addr 0x4a04914, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_10(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_11, addr 0x4a0491c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_11(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_12, addr 0x4a04924, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_12(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_13, addr 0x4a0492c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_13(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_14, addr 0x4a04934, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_14(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_15, addr 0x4a0493c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_15(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_16, addr 0x4a04944, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_16(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_17, addr 0x4a0494c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_17(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_18, addr 0x4a04954, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_18(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_19, addr 0x4a0495c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_19(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_2, addr 0x4a048d4, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_2(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_20, addr 0x4a04964, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_20(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_21, addr 0x4a0496c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_21(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_22, addr 0x4a04974, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_22(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_3, addr 0x4a048dc, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_3(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_4, addr 0x4a048e4, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_4(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_5, addr 0x4a048ec, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_5(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_6, addr 0x4a048f4, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_6(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_7, addr 0x4a048fc, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_7(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_8, addr 0x4a04904, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_8(float_t t);

  /// @brief Method <ConvertTransitionFunction>b__12_9, addr 0x4a0490c, size 0x8, virtual false, abstract: false, final false
  inline float_t _ConvertTransitionFunction_b__12_9(float_t t);

  /// @brief Method .ctor, addr 0x4a04894, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__ComputedTransitionUtils____c* getStaticF___9();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_0();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_1();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_10();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_11();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_12();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_13();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_14();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_15();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_16();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_17();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_18();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_19();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_2();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_20();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_21();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_22();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_3();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_4();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_5();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_6();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_7();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_8();

  static inline ::System::Func_2<float_t, float_t>* getStaticF___9__12_9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__ComputedTransitionUtils____c* value);

  static inline void setStaticF___9__12_0(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_1(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_10(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_11(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_12(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_13(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_14(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_15(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_16(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_17(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_18(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_19(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_2(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_20(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_21(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_22(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_3(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_4(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_5(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_6(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_7(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_8(::System::Func_2<float_t, float_t>* value);

  static inline void setStaticF___9__12_9(::System::Func_2<float_t, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ComputedTransitionUtils____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ComputedTransitionUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ComputedTransitionUtils____c(__ComputedTransitionUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ComputedTransitionUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ComputedTransitionUtils____c(__ComputedTransitionUtils____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6028 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ComputedTransitionUtils____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ComputedTransitionUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ComputedTransitionUtils*
class CORDL_TYPE ComputedTransitionUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__ComputedTransitionUtils____c;

  /// @brief Field s_ComputedTransitionsBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ComputedTransitionsBuffer,
                             put = setStaticF_s_ComputedTransitionsBuffer)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* s_ComputedTransitionsBuffer;

  /// @brief Method ComputeTransitionPropertyData, addr 0x4a03444, size 0x2a0, virtual false, abstract: false, final false
  static inline void ComputeTransitionPropertyData(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* outData);

  /// @brief Method ConvertTransitionFunction, addr 0x4a03b0c, size 0xca0, virtual false, abstract: false, final false
  static inline ::System::Func_2<float_t, float_t>* ConvertTransitionFunction(::UnityEngine::UIElements::EasingMode mode);

  /// @brief Method ConvertTransitionTime, addr 0x4a03a10, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ConvertTransitionTime(::UnityEngine::UIElements::TimeValue time);

  /// @brief Method GetOrComputeTransitionPropertyData, addr 0x4a02c14, size 0x1a4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty, ::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>
  GetOrComputeTransitionPropertyData(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method GetTransitionHashCode, addr 0x4a02fbc, size 0x488, virtual false, abstract: false, final false
  static inline int32_t GetTransitionHashCode(ByRef<::UnityEngine::UIElements::ComputedStyle> cs);

  /// @brief Method GetTransitionProperty, addr 0x4a02e84, size 0x138, virtual false, abstract: false, final false
  static inline bool GetTransitionProperty(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                           ByRef<::UnityEngine::UIElements::ComputedTransitionProperty> result);

  /// @brief Method GetWrappingTransitionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetWrappingTransitionData(::System::Collections::Generic::List_1<T>* list, int32_t i, T defaultValue);

  /// @brief Method HasTransitionProperty, addr 0x4a02db8, size 0xcc, virtual false, abstract: false, final false
  static inline bool HasTransitionProperty(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method SameTransitionProperty, addr 0x4a0382c, size 0xf8, virtual false, abstract: false, final false
  static inline bool SameTransitionProperty(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* a,
                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* b);

  /// @brief Method SameTransitionProperty, addr 0x4a03924, size 0xec, virtual false, abstract: false, final false
  static inline bool SameTransitionProperty(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* a,
                                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* b);

  /// @brief Method SameTransitionProperty, addr 0x4a036ec, size 0x140, virtual false, abstract: false, final false
  static inline bool SameTransitionProperty(ByRef<::UnityEngine::UIElements::ComputedStyle> x, ByRef<::UnityEngine::UIElements::ComputedStyle> y);

  /// @brief Method UpdateComputedTransitions, addr 0x4a02bb0, size 0x64, virtual false, abstract: false, final false
  static inline void UpdateComputedTransitions(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* getStaticF_s_ComputedTransitionsBuffer();

  static inline void setStaticF_s_ComputedTransitionsBuffer(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ComputedTransitionProperty>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputedTransitionUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputedTransitionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputedTransitionUtils(ComputedTransitionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputedTransitionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputedTransitionUtils(ComputedTransitionUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6029 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ComputedTransitionUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ComputedTransitionUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ComputedTransitionUtils*, "UnityEngine.UIElements", "ComputedTransitionUtils");
NEED_NO_BOX(::UnityEngine::UIElements::__ComputedTransitionUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ComputedTransitionUtils____c*, "UnityEngine.UIElements", "ComputedTransitionUtils/<>c");
