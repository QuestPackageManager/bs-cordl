#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ThreadSafeStore_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__cordl_internal_get__concurrentStore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____concurrentStore;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>* const& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__cordl_internal_get__concurrentStore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____concurrentStore;
}
template<typename TKey,typename TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__cordl_internal_set__concurrentStore(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____concurrentStore, value);
}
template<typename TKey,typename TValue>
constexpr ::System::Func_2<TKey,TValue>*& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__cordl_internal_get__creator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____creator;
}
template<typename TKey,typename TValue>
constexpr ::System::Func_2<TKey,TValue>* const& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__cordl_internal_get__creator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____creator;
}
template<typename TKey,typename TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__cordl_internal_set__creator(::System::Func_2<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____creator, value);
}
template<typename TKey,typename TValue>
inline void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::_ctor(::System::Func_2<TKey,TValue>*  creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey,TValue>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, creator);
}
template<typename TKey,typename TValue>
inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::Get(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::New_ctor(::System::Func_2<TKey,TValue>*  creator)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>*>(creator));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::ThreadSafeStore_2()   {
}
