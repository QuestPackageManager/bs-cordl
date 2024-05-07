#pragma once
// IWYU pragma private; include "LufsMetering/LufsMeter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LufsMeter)
namespace LufsMetering {
struct LoudnessData;
}
namespace LufsMetering {
class __LufsMeter____c;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace LufsMetering {
class LufsMeter;
}
namespace LufsMetering {
class __LufsMeter____c;
}
// Write type traits
MARK_REF_PTR_T(::LufsMetering::LufsMeter);
MARK_REF_PTR_T(::LufsMetering::__LufsMeter____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LufsMetering {
// Is value type: false
// CS Name: ::LufsMeter::<>c*
class CORDL_TYPE __LufsMeter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::LufsMetering::__LufsMeter____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Func_3<float_t, float_t, float_t>* __9__5_0;

  static inline ::LufsMetering::__LufsMeter____c* New_ctor();

  /// @brief Method <IntegratedLoudness>b__5_0, addr 0x26aac64, size 0x8, virtual false, abstract: false, final false
  inline float_t _IntegratedLoudness_b__5_0(float_t g, float_t z);

  /// @brief Method .ctor, addr 0x26aac5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::LufsMetering::__LufsMeter____c* getStaticF___9();

  static inline ::System::Func_3<float_t, float_t, float_t>* getStaticF___9__5_0();

  static inline void setStaticF___9(::LufsMetering::__LufsMeter____c* value);

  static inline void setStaticF___9__5_0(::System::Func_3<float_t, float_t, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LufsMeter____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LufsMeter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LufsMeter____c(__LufsMeter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LufsMeter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LufsMeter____c(__LufsMeter____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LufsMetering::__LufsMeter____c, 0x10>, "Size mismatch!");

} // namespace LufsMetering
// Type: LufsMetering::LufsMeter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LufsMetering {
// Is value type: false
// CS Name: ::LufsMetering::LufsMeter*
class CORDL_TYPE LufsMeter : public ::System::Object {
public:
  // Declarations
  using __c = ::LufsMetering::__LufsMeter____c;

  /// @brief Field _channelGains, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__channelGains, put = setStaticF__channelGains))::ArrayW<float_t, ::Array<float_t>*> _channelGains;

  /// @brief Field _inputDataNative, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__inputDataNative,
                      put = __cordl_internal_set__inputDataNative))::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> _inputDataNative;

  /// @brief Field _outputDataNative, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__outputDataNative,
                      put = __cordl_internal_set__outputDataNative))::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> _outputDataNative;

  /// @brief Method AnalyzeClipLoudness, addr 0x26a845c, size 0xc4, virtual false, abstract: false, final false
  inline ::LufsMetering::LoudnessData AnalyzeClipLoudness(::UnityEngine::AudioClip* clip);

  /// @brief Method IntegratedLoudness, addr 0x26a8520, size 0xe44, virtual false, abstract: false, final false
  inline ::LufsMetering::LoudnessData IntegratedLoudness(::ArrayW<float_t, ::Array<float_t>*> interleavedData, int32_t numChannels, int32_t rate);

  /// @brief Method MomentaryLoudness, addr 0x26a9374, size 0x7e8, virtual false, abstract: false, final false
  inline float_t MomentaryLoudness(::ArrayW<float_t, ::Array<float_t>*> interleavedData, int32_t numChannels, int32_t rate);

  static inline ::LufsMetering::LufsMeter* New_ctor();

  /// @brief Method SwapData, addr 0x26a9364, size 0x10, virtual false, abstract: false, final false
  inline void SwapData();

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> const& __cordl_internal_get__inputDataNative() const;

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*>& __cordl_internal_get__inputDataNative();

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> const& __cordl_internal_get__outputDataNative() const;

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*>& __cordl_internal_get__outputDataNative();

  constexpr void __cordl_internal_set__inputDataNative(::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> value);

  constexpr void __cordl_internal_set__outputDataNative(::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> value);

  /// @brief Method .ctor, addr 0x26a9b5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF__channelGains();

  static inline void setStaticF__channelGains(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LufsMeter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LufsMeter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LufsMeter(LufsMeter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LufsMeter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LufsMeter(LufsMeter const&) = delete;

  /// @brief Field _inputDataNative, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> ____inputDataNative;

  /// @brief Field _outputDataNative, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> ____outputDataNative;

  /// @brief Field kBlockSize offset 0xffffffff size 0x4
  static constexpr float_t kBlockSize{ 0.4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LufsMetering::LufsMeter, 0x20>, "Size mismatch!");

static_assert(offsetof(::LufsMetering::LufsMeter, ____inputDataNative) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::LufsMeter, ____outputDataNative) == 0x18, "Offset mismatch!");

} // namespace LufsMetering
NEED_NO_BOX(::LufsMetering::LufsMeter);
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::LufsMeter*, "LufsMetering", "LufsMeter");
NEED_NO_BOX(::LufsMetering::__LufsMeter____c);
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::__LufsMeter____c*, "LufsMetering", "LufsMeter/<>c");
